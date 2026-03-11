// ============================================================================
// RISC-V Instruction Trace Module
// ============================================================================
// Description:
//   Captures instruction execution from the CVA6 pipeline and sends
//   formatted trace information via UART for real-time debugging.
//
// Features:
//   - Captures PC, instruction word, and commit status
//   - Formats trace data into human-readable ASCII messages
//   - Buffers traces in FIFO to handle UART speed limitations
//   - Non-intrusive to processor operation (no pipeline stalls)
//
// Example Output:
//   PC: 0x00001000 | INST: 0x00000513 | STATUS: EXECUTED
//   PC: 0x00001004 | INST: 0x00100593 | STATUS: EXECUTED
//
// ============================================================================

module riscv_instr_trace #(
    parameter FIFO_DEPTH = 8,        // Number of trace entries to buffer
    parameter UART_BASE  = 32'h21000000  // UART base address
) (
    input  logic        clk,
    input  logic        reset,
    
    // Pipeline Interface (from CVA6 core)
    input  logic [31:0] commit_pc,        // PC of committed instruction
    input  logic [31:0] commit_instr,     // Instruction word
    input  logic        commit_valid,     // Instruction was committed
    
    // UART Interface
    output logic        uart_req,
    output logic        uart_we,
    output logic [31:0] uart_addr,
    output logic [31:0] uart_wdata,
    input  logic [31:0] uart_rdata,
    input  logic        uart_ready,
    
    // Control/Status
    input  logic        trace_enable,     // Enable tracing
    output logic        fifo_full,        // FIFO overflow warning
    output logic        fifo_empty,       // No pending traces
    output logic [31:0] trace_count       // Total traces captured
);

    // ========================================================================
    // Trace Entry Structure
    // ========================================================================
    typedef struct packed {
        logic [31:0] pc;
        logic [31:0] instr;
        logic        valid;
    } trace_entry_t;
    
    // ========================================================================
    // FIFO for Trace Buffering
    // ========================================================================
    trace_entry_t trace_fifo [0:FIFO_DEPTH-1];
    logic [$clog2(FIFO_DEPTH):0] wr_ptr;
    logic [$clog2(FIFO_DEPTH):0] rd_ptr;
    logic [$clog2(FIFO_DEPTH):0] fifo_count;
    
    assign fifo_full  = (fifo_count == FIFO_DEPTH);
    assign fifo_empty = (fifo_count == 0);
    
    // ========================================================================
    // Trace Capture Logic
    // ========================================================================
    // Write to FIFO when instruction commits
    always_ff @(posedge clk) begin
        if (reset) begin
            wr_ptr <= '0;
            trace_count <= '0;
        end else begin
            if (commit_valid && trace_enable && !fifo_full) begin
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].pc    <= commit_pc;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].instr <= commit_instr;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].valid <= 1'b1;
                wr_ptr <= wr_ptr + 1'b1;
                trace_count <= trace_count + 1'b1;
            end
        end
    end
    
    // ========================================================================
    // Trace Formatter State Machine
    // ========================================================================
    typedef enum logic [3:0] {
        IDLE,
        SEND_PREFIX,      // "PC: 0x"
        SEND_PC,          // 8 hex digits
        SEND_MID1,        // " | INST: 0x"
        SEND_INSTR,       // 8 hex digits
        SEND_MID2,        // " | STATUS: "
        SEND_STATUS,      // "EXECUTED"
        SEND_NEWLINE,     // "\r\n"
        WAIT_UART
    } trace_state_t;
    
    trace_state_t state, next_state;
    
    // Current trace being formatted
    trace_entry_t current_trace;
    logic [3:0]   char_index;      // Index for multi-character sequences
    logic [7:0]   char_to_send;    // Current character
    
    // String constants (ASCII)
    localparam logic [7:0] STR_PREFIX [0:5]  = '{"P", "C", ":", " ", "0", "x"};
    localparam logic [7:0] STR_MID1   [0:10] = '{" ", "|", " ", "I", "N", "S", "T", ":", " ", "0", "x"};
    localparam logic [7:0] STR_MID2   [0:10] = '{" ", "|", " ", "S", "T", "A", "T", "U", "S", ":", " "};
    localparam logic [7:0] STR_STATUS [0:7]  = '{"E", "X", "E", "C", "U", "T", "E", "D"};
    
    // ========================================================================
    // State Machine
    // ========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            rd_ptr <= '0;
            char_index <= '0;
            current_trace <= '0;
        end else begin
            state <= next_state;
            
            // Load next trace from FIFO
            if (state == IDLE && !fifo_empty) begin
                current_trace <= trace_fifo[rd_ptr[$clog2(FIFO_DEPTH)-1:0]];
                rd_ptr <= rd_ptr + 1'b1;
                char_index <= '0;
            end
            
            // Increment character index when character sent
            if ((state == SEND_PREFIX || state == SEND_MID1 || 
                 state == SEND_MID2 || state == SEND_STATUS) && uart_ready) begin
                char_index <= char_index + 1'b1;
            end
            
            // Reset char_index for hex digit sequences
            if (state == SEND_PC && char_index == 7 && uart_ready) begin
                char_index <= '0;
            end
            if (state == SEND_INSTR && char_index == 7 && uart_ready) begin
                char_index <= '0;
            end
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (!fifo_empty) begin
                    next_state = SEND_PREFIX;
                end
            end
            
            SEND_PREFIX: begin
                if (char_index == 5 && uart_ready) begin
                    next_state = SEND_PC;
                end
            end
            
            SEND_PC: begin
                if (char_index == 7 && uart_ready) begin
                    next_state = SEND_MID1;
                end
            end
            
            SEND_MID1: begin
                if (char_index == 9 && uart_ready) begin
                    next_state = SEND_INSTR;
                end
            end
            
            SEND_INSTR: begin
                if (char_index == 7 && uart_ready) begin
                    next_state = SEND_MID2;
                end
            end
            
            SEND_MID2: begin
                if (char_index == 9 && uart_ready) begin
                    next_state = SEND_STATUS;
                end
            end
            
            SEND_STATUS: begin
                if (char_index == 6 && uart_ready) begin
                    next_state = SEND_NEWLINE;
                end
            end
            
            SEND_NEWLINE: begin
                if (uart_ready) begin
                    next_state = IDLE;
                end
            end
            
            WAIT_UART: begin
                if (uart_ready) begin
                    next_state = IDLE;
                end
            end
            
            default: next_state = IDLE;
        endcase
    end
    
    // ========================================================================
    // Character Selection Logic
    // ========================================================================
    always_comb begin
        char_to_send = 8'h00;
        
        case (state)
            SEND_PREFIX: begin
                char_to_send = STR_PREFIX[char_index];
            end
            
            SEND_PC: begin
                // Convert PC hex nibble to ASCII
                char_to_send = nibble_to_ascii(current_trace.pc[(31 - char_index*4) -: 4]);
            end
            
            SEND_MID1: begin
                char_to_send = STR_MID1[char_index];
            end
            
            SEND_INSTR: begin
                // Convert instruction hex nibble to ASCII
                char_to_send = nibble_to_ascii(current_trace.instr[(31 - char_index*4) -: 4]);
            end
            
            SEND_MID2: begin
                char_to_send = STR_MID2[char_index];
            end
            
            SEND_STATUS: begin
                char_to_send = STR_STATUS[char_index];
            end
            
            SEND_NEWLINE: begin
                char_to_send = (char_index == 0) ? 8'h0D : 8'h0A;  // \r\n
            end
            
            default: char_to_send = 8'h00;
        endcase
    end
    
    // ========================================================================
    // UART Interface
    // ========================================================================
    assign uart_req   = (state != IDLE) && (state != WAIT_UART);
    assign uart_we    = 1'b1;  // Always writing to UART
    assign uart_addr  = UART_BASE + 32'h18;  // UART TX data register offset
    assign uart_wdata = {24'h0, char_to_send};
    
    // ========================================================================
    // FIFO Count Management
    // ========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            fifo_count <= '0;
        end else begin
            case ({commit_valid && trace_enable && !fifo_full, state == IDLE && !fifo_empty})
                2'b10: fifo_count <= fifo_count + 1'b1;  // Write only
                2'b01: fifo_count <= fifo_count - 1'b1;  // Read only
                default: fifo_count <= fifo_count;        // Both or neither
            endcase
        end
    end
    
    // ========================================================================
    // Helper Function: Nibble to ASCII Hex
    // ========================================================================
    function automatic logic [7:0] nibble_to_ascii(input logic [3:0] nibble);
        if (nibble <= 4'h9)
            return 8'h30 + {4'h0, nibble};  // '0'-'9'
        else
            return 8'h41 + {4'h0, nibble} - 8'h0A;  // 'A'-'F'
    endfunction
    
    // ========================================================================
    // Debug Assertions
    // ========================================================================
    // synthesis translate_off
    always @(posedge clk) begin
        if (!reset && commit_valid && trace_enable && fifo_full) begin
            $display("WARNING @ %t: Trace FIFO full! Dropping trace for PC=0x%08h", 
                     $time, commit_pc);
        end
    end
    // synthesis translate_on

endmodule
