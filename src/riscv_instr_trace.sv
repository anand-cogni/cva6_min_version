// ============================================================================
// RISC-V Unified Trace Module (Instructions + HBM3 Data Transactions)
// ============================================================================
// Description:
//   Captures instruction execution AND HBM3 data transactions from the CVA6
//   pipeline and sends formatted trace information via UART for debugging.
//
// Features:
//   - Captures PC, instruction word, and commit status
//   - Captures HBM3 read/write transactions (address + data)
//   - Formats trace data into human-readable ASCII messages
//   - Buffers traces in FIFO to handle UART speed limitations
//   - Non-intrusive to processor operation (no pipeline stalls)
//
// Example Output:
//   PC: 0x00001000 | INST: 0x00000513 | STATUS: EXECUTED
//   HBM3_WR: ADDR=0x30000000 DATA=0xDEADBEEF
//   HBM3_RD: ADDR=0x30000000 DATA=0xDEADBEEF
//
// ============================================================================

module riscv_instr_trace #(
    
    //parameter FIFO_DEPTH    = 8,
    parameter FIFO_DEPTH    = 64,             // Number of trace entries to buffer
    parameter UART_BASE     = 32'h21000000,  // UART base address
    parameter HBM3_MEM_BASE = 32'h30000000,  // HBM3 base address
    parameter HBM3_MEM_SIZE = 32'h10000000   // HBM3 size (256MB)
) (
    input  logic        clk,
    input  logic        reset,
    
    // Pipeline Interface (from CVA6 core)
    input  logic [31:0] commit_pc,        // PC of committed instruction
    input  logic [31:0] commit_instr,     // Instruction word
    input  logic        commit_valid,     // Instruction was committed
    
    // Data Bus Monitoring (for HBM3 transactions)
    input  logic        data_req,         // Data request
    input  logic        data_we,          // Write enable
    input  logic [31:0] data_addr,        // Data address
    input  logic [31:0] data_wdata,       // Write data
    input  logic [31:0] data_rdata,       // Read data
    input  logic        data_valid,       // Read data valid
    
    // UART Interface
    output logic        uart_req,
    output logic        uart_we,
    output logic [31:0] uart_addr,
    output logic [31:0] uart_wdata,
    input  logic [31:0] uart_rdata,
    input  logic        uart_ready,
    
    // Control/Status
    input  logic        trace_enable,       // Enable instruction tracing
    input  logic        trace_data_enable,  // Enable HBM3 data tracing
    output logic        fifo_full,          // FIFO overflow warning
    output logic        fifo_empty,         // No pending traces
    output logic [31:0] trace_count         // Total traces captured
);

    // ========================================================================
    // Trace Type Enumeration
    // ========================================================================
    typedef enum logic [1:0] {
        TRACE_INSTR    = 2'b00,
        TRACE_HBM3_WR  = 2'b01,
        TRACE_HBM3_RD  = 2'b10
    } trace_type_t;
    
    // ========================================================================
    // Unified Trace Entry Structure
    // ========================================================================
    typedef struct packed {
        trace_type_t trace_type;
        logic [31:0] addr;  // PC or memory address
        logic [31:0] data;  // Instruction or data
        logic        valid;
    } trace_entry_t;
    
    // ========================================================================
    // HBM3 Transaction Detection
    // ========================================================================
    logic hbm3_access;
    logic hbm3_write;
    logic hbm3_read;
    logic hbm3_read_pending;  // Track pending read
    logic [31:0] captured_addr;
    logic [31:0] captured_wdata;
    logic [31:0] captured_raddr;  // Captured read address
    
    assign hbm3_access = (data_addr >= HBM3_MEM_BASE) && 
                         (data_addr < HBM3_MEM_BASE + HBM3_MEM_SIZE);
    assign hbm3_write  = data_req && data_we && hbm3_access && trace_data_enable;
    
    // Detect read REQUEST (not response)
    logic hbm3_read_req;
    assign hbm3_read_req = data_req && !data_we && hbm3_access && trace_data_enable;
    
    // Detect read DATA arrival
    assign hbm3_read = hbm3_read_pending && data_valid;
    
    // Capture write address and data (write happens before response)
    // Capture read address when read is requested
    always_ff @(posedge clk) begin
        if (reset) begin
            captured_addr  <= '0;
            captured_wdata <= '0;
            captured_raddr <= '0;
            hbm3_read_pending <= 1'b0;
        end else begin
            // Capture write transaction
            if (hbm3_write) begin
                captured_addr  <= data_addr;
                captured_wdata <= data_wdata;
            end
            
            // Capture read address when read is requested
            if (hbm3_read_req) begin
                captured_raddr <= data_addr;
                hbm3_read_pending <= 1'b1;
            end
            
            // Clear pending flag when data arrives
            if (hbm3_read_pending && data_valid) begin
                hbm3_read_pending <= 1'b0;
            end
        end
    end
    
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
    // Trace Capture Logic with Priority
    // ========================================================================
    // Priority: HBM3 transactions > Instruction traces
    logic capture_instr;
    logic capture_hbm3_wr;
    logic capture_hbm3_rd;
    
    assign capture_hbm3_wr = hbm3_write && !fifo_full;
    assign capture_hbm3_rd = hbm3_read && !fifo_full;
    assign capture_instr   = commit_valid && trace_enable && !fifo_full && 
                            !capture_hbm3_wr && !capture_hbm3_rd;
    
    always_ff @(posedge clk) begin
        if (reset) begin
            wr_ptr <= '0;
            trace_count <= '0;
        end else begin
            // HBM3 Write has highest priority
            if (capture_hbm3_wr) begin
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].trace_type <= TRACE_HBM3_WR;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].addr       <= data_addr;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].data       <= data_wdata;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].valid      <= 1'b1;
                wr_ptr <= wr_ptr + 1'b1;
                trace_count <= trace_count + 1'b1;
            end
            // HBM3 Read has second priority
            else if (capture_hbm3_rd) begin
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].trace_type <= TRACE_HBM3_RD;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].addr       <= captured_raddr;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].data       <= data_rdata;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].valid      <= 1'b1;
                wr_ptr <= wr_ptr + 1'b1;
                trace_count <= trace_count + 1'b1;
            end
            // Instruction trace has lowest priority
            else if (capture_instr) begin
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].trace_type <= TRACE_INSTR;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].addr       <= commit_pc;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].data       <= commit_instr;
                trace_fifo[wr_ptr[$clog2(FIFO_DEPTH)-1:0]].valid      <= 1'b1;
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
        SEND_PREFIX,        // "PC: 0x" or "HBM3_WR: " or "HBM3_RD: "
        SEND_PC,            // 8 hex digits (for instruction)
        SEND_MID1,          // " | INST: 0x"
        SEND_INSTR,         // 8 hex digits
        SEND_MID2,          // " | STATUS: "
        SEND_STATUS,        // "EXECUTED"
        SEND_HBM3_PREFIX,   // "HBM3_WR: " or "HBM3_RD: "
        SEND_ADDR_LABEL,    // "ADDR="
        SEND_ADDR,          // 8 hex digits
        SEND_DATA_LABEL,    // " DATA=0x"
        SEND_DATA,          // 8 hex digits
        SEND_NEWLINE,       // "\r\n"
        WAIT_UART
    } trace_state_t;
    
    trace_state_t state, next_state;
    
    // Current trace being formatted
    trace_entry_t current_trace;
    logic [3:0]   char_index;      // Index for multi-character sequences
    logic [7:0]   char_to_send;    // Current character
    
    // String constants for instruction traces
    localparam logic [7:0] STR_PREFIX [0:5]  = '{"P", "C", ":", " ", "0", "x"};
    localparam logic [7:0] STR_MID1   [0:10] = '{" ", "|", " ", "I", "N", "S", "T", ":", " ", "0", "x"};
    localparam logic [7:0] STR_MID2   [0:10] = '{" ", "|", " ", "S", "T", "A", "T", "U", "S", ":", " "};
    localparam logic [7:0] STR_STATUS [0:7]  = '{"E", "X", "E", "C", "U", "T", "E", "D"};
    
    // String constants for HBM3 traces
    localparam logic [7:0] STR_HBM3_WR [0:8]  = '{"H", "B", "M", "3", "_", "W", "R", ":", " "};
    localparam logic [7:0] STR_HBM3_RD [0:8]  = '{"H", "B", "M", "3", "_", "R", "D", ":", " "};
    localparam logic [7:0] STR_ADDR_LBL [0:4] = '{"A", "D", "D", "R", "="};
    localparam logic [7:0] STR_DATA_LBL [0:7] = '{" ", "D", "A", "T", "A", "=", "0", "x"};
    
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
            
            // Reset char_index when transitioning TO hex digit states
            if ((next_state == SEND_PC || next_state == SEND_INSTR || 
                 next_state == SEND_ADDR || next_state == SEND_DATA) &&
                (state != next_state)) begin
                char_index <= '0;
            end
            // Increment character index when character sent in string states
            else if ((state == SEND_PREFIX || state == SEND_MID1 || 
                      state == SEND_MID2 || state == SEND_STATUS ||
                      state == SEND_HBM3_PREFIX || state == SEND_ADDR_LABEL ||
                      state == SEND_DATA_LABEL) && uart_ready) begin
                char_index <= char_index + 1'b1;
            end
            // Increment character index in hex digit states
            else if ((state == SEND_PC || state == SEND_INSTR || 
                      state == SEND_ADDR || state == SEND_DATA) && uart_ready) begin
                if (char_index < 7) begin
                    char_index <= char_index + 1'b1;
                end else begin
                    char_index <= '0;  // Reset after sending 8th hex digit
                end
            end
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (!fifo_empty) begin
                    // Branch based on trace type
                    if (trace_fifo[rd_ptr[$clog2(FIFO_DEPTH)-1:0]].trace_type == TRACE_INSTR)
                        next_state = SEND_PREFIX;
                    else
                        next_state = SEND_HBM3_PREFIX;
                end
            end
            
            // ============================================================
            // Instruction Trace Path
            // ============================================================
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
                if (char_index == 10 && uart_ready) begin
                    next_state = SEND_INSTR;
                end
            end
            
            SEND_INSTR: begin
                if (char_index == 7 && uart_ready) begin
                    next_state = SEND_MID2;
                end
            end
            
            SEND_MID2: begin
                if (char_index == 10 && uart_ready) begin
                    next_state = SEND_STATUS;
                end
            end
            
            SEND_STATUS: begin
                if (char_index == 7 && uart_ready) begin
                    next_state = SEND_NEWLINE;
                end
            end
            
            // ============================================================
            // HBM3 Data Trace Path
            // ============================================================
            SEND_HBM3_PREFIX: begin
                if (char_index == 8 && uart_ready) begin
                    next_state = SEND_ADDR_LABEL;
                end
            end
            
            SEND_ADDR_LABEL: begin
                if (char_index == 4 && uart_ready) begin
                    next_state = SEND_ADDR;
                end
            end
            
            SEND_ADDR: begin
                if (char_index == 7 && uart_ready) begin
                    next_state = SEND_DATA_LABEL;
                end
            end
            
            SEND_DATA_LABEL: begin
                if (char_index == 7 && uart_ready) begin
                    next_state = SEND_DATA;
                end
            end
            
            SEND_DATA: begin
                if (char_index == 7 && uart_ready) begin
                    next_state = SEND_NEWLINE;
                end
            end
            
            // ============================================================
            // Common States
            // ============================================================
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
                char_to_send = nibble_to_ascii(current_trace.addr[(31 - char_index*4) -: 4]);
            end
            
            SEND_MID1: begin
                char_to_send = STR_MID1[char_index];
            end
            
            SEND_INSTR: begin
                char_to_send = nibble_to_ascii(current_trace.data[(31 - char_index*4) -: 4]);
            end
            
            SEND_MID2: begin
                char_to_send = STR_MID2[char_index];
            end
            
            SEND_STATUS: begin
                char_to_send = STR_STATUS[char_index];
            end
            
            SEND_HBM3_PREFIX: begin
                if (current_trace.trace_type == TRACE_HBM3_WR)
                    char_to_send = STR_HBM3_WR[char_index];
                else
                    char_to_send = STR_HBM3_RD[char_index];
            end
            
            SEND_ADDR_LABEL: begin
                char_to_send = STR_ADDR_LBL[char_index];
            end
            
            SEND_ADDR: begin
                char_to_send = nibble_to_ascii(current_trace.addr[(31 - char_index*4) -: 4]);
            end
            
            SEND_DATA_LABEL: begin
                char_to_send = STR_DATA_LBL[char_index];
            end
            
            SEND_DATA: begin
                char_to_send = nibble_to_ascii(current_trace.data[(31 - char_index*4) -: 4]);
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
    assign uart_addr  = UART_BASE;  // UART TX data register at base address (0x21000000)
    assign uart_wdata = {24'h0, char_to_send};
    
    // ========================================================================
    // FIFO Count Management
    // ========================================================================
    logic fifo_wr;
    logic fifo_rd;
    
    assign fifo_wr = capture_instr || capture_hbm3_wr || capture_hbm3_rd;
    assign fifo_rd = (state == IDLE && !fifo_empty);
    
    always_ff @(posedge clk) begin
        if (reset) begin
            fifo_count <= '0;
        end else begin
            case ({fifo_wr, fifo_rd})
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
    // Debug Assertions - Edge-triggered FIFO full warnings
    // ========================================================================
    // synthesis translate_off
    logic fifo_full_prev;
    logic [31:0] dropped_instr_count;
    logic [31:0] dropped_hbm3_wr_count;
    logic [31:0] dropped_hbm3_rd_count;
    integer debug_print_count;
    
    always @(posedge clk) begin
        if (reset) begin
            fifo_full_prev <= 1'b0;
            dropped_instr_count <= 32'h0;
            dropped_hbm3_wr_count <= 32'h0;
            dropped_hbm3_rd_count <= 32'h0;
            debug_print_count <= 0;
        end else begin
            fifo_full_prev <= fifo_full;
            
            // DEBUG: Print first 3 HBM3 write detections
            if (data_req && data_we && hbm3_access && debug_print_count < 3) begin
                $display("=== TRACER DEBUG @ %0t ===", $time);
                $display("  data_req=%b data_we=%b", data_req, data_we);
                $display("  data_addr=0x%08h (HBM3 range check: %b)", data_addr, hbm3_access);
                $display("  trace_data_enable=%b", trace_data_enable);
                $display("  hbm3_write=%b fifo_full=%b", hbm3_write, fifo_full);
                $display("  capture_hbm3_wr=%b", capture_hbm3_wr);
                debug_print_count <= debug_print_count + 1;
            end
            
            // Count dropped traces while FIFO is full
            if (fifo_full) begin
                if (commit_valid && trace_enable && !capture_hbm3_wr && !capture_hbm3_rd)
                    dropped_instr_count <= dropped_instr_count + 1;
                if (hbm3_write)
                    dropped_hbm3_wr_count <= dropped_hbm3_wr_count + 1;
                if (hbm3_read)
                    dropped_hbm3_rd_count <= dropped_hbm3_rd_count + 1;
            end
            
            // Print summary only on falling edge of fifo_full (when it clears)
            if (fifo_full_prev && !fifo_full) begin
                if (dropped_instr_count > 0 || dropped_hbm3_wr_count > 0 || dropped_hbm3_rd_count > 0) begin
                    $display("========================================================================");
                    $display("TRACE FIFO OVERFLOW SUMMARY @ %t:", $time);
                    if (dropped_instr_count > 0)
                        $display(">>> Dropped %0d instruction traces", dropped_instr_count);
                    if (dropped_hbm3_wr_count > 0)
                        $display(">>> Dropped %0d HBM3 write traces", dropped_hbm3_wr_count);
                    if (dropped_hbm3_rd_count > 0)
                        $display(">>> Dropped %0d HBM3 read traces", dropped_hbm3_rd_count);
                    $display(">>> FIFO cleared - resuming trace capture");
                    $display("========================================================================");
                end
                
                // Reset counters
                dropped_instr_count <= 32'h0;
                dropped_hbm3_wr_count <= 32'h0;
                dropped_hbm3_rd_count <= 32'h0;
            end
        end
    end
    // synthesis translate_on

endmodule
