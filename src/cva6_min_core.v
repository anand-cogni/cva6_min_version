`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/23/2026 03:12:32 PM
// Design Name: 
// Module Name: simple_riscv_core
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


// ============================================================================
// Simple RISC-V RV32I Core - Minimal Implementation
// ============================================================================
// Description:
//   Ultra-minimal RISC-V processor that actually executes instructions.
//   Supports subset of RV32I needed for LED blink program.
//
// Supported Instructions:
//   - LUI   (Load Upper Immediate)
//   - ADDI  (Add Immediate)
//   - SW    (Store Word)
//   - BNE   (Branch Not Equal)
//   - JAL   (Jump And Link)
//
// This is a REAL processor - fetches, decodes, and executes instructions!
// ============================================================================

module simple_riscv_core (
    input  wire        clk,
    input  wire        reset,
    
    // Instruction Memory Interface
    output wire [31:0] instr_addr,
    input  wire [31:0] instr_data,
    
    // Data Memory Interface  
    output reg         data_req,
    output reg         data_we,
    output reg  [3:0]  data_be,
    output reg  [31:0] data_addr,
    output reg  [31:0] data_wdata,
    input  wire [31:0] data_rdata
);

    // ========================================================================
    // Processor State
    // ========================================================================
    reg [31:0] pc;           // Program Counter
    reg [31:0] regs [0:31];  // Register File (x0-x31)
    reg [2:0]  state;        // FSM state
    
    // FSM States
    localparam FETCH   = 3'd0;
    localparam DECODE  = 3'd1;
    localparam EXECUTE = 3'd2;
    localparam MEMORY  = 3'd3;
    localparam WRITEBACK = 3'd4;
    
    // ========================================================================
    // Instruction Decode
    // ========================================================================
    wire [31:0] instr;
    wire [6:0]  opcode;
    wire [4:0]  rd, rs1, rs2;
    wire [2:0]  funct3;
    wire [6:0]  funct7;
    wire [31:0] imm_i, imm_s, imm_b, imm_u, imm_j;
    
    assign instr = instr_data;
    assign opcode = instr[6:0];
    assign rd     = instr[11:7];
    assign rs1    = instr[19:15];
    assign rs2    = instr[24:20];
    assign funct3 = instr[14:12];
    assign funct7 = instr[31:25];
    
    // Immediate decoding
    assign imm_i = {{20{instr[31]}}, instr[31:20]};
    assign imm_s = {{20{instr[31]}}, instr[31:25], instr[11:7]};
    assign imm_b = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
    assign imm_u = {instr[31:12], 12'b0};
    assign imm_j = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};
    
    // Instruction decode
    wire is_lui   = (opcode == 7'b0110111);  // LUI
    wire is_addi  = (opcode == 7'b0010011) && (funct3 == 3'b000);  // ADDI
    wire is_sw    = (opcode == 7'b0100011) && (funct3 == 3'b010);  // SW
    wire is_bne   = (opcode == 7'b1100011) && (funct3 == 3'b001);  // BNE
    wire is_jal   = (opcode == 7'b1101111);  // JAL
    
    // ========================================================================
    // Instruction Fetch
    // ========================================================================
    assign instr_addr = pc;
    
    // ========================================================================
    // Execution Logic
    // ========================================================================
    reg [31:0] alu_result;
    reg [31:0] next_pc;
    reg        branch_taken;
    
    integer i;
    
    always @(posedge clk) begin
        if (reset) begin
            pc <= 32'h0000_0000;
            state <= FETCH;
            data_req <= 1'b0;
            data_we <= 1'b0;
            
            // Initialize registers
            for (i = 0; i < 32; i = i + 1) begin
                regs[i] <= 32'h0;
            end
            regs[0] <= 32'h0;  // x0 always 0
            
        end else begin
            case (state)
                
                FETCH: begin
                    // Instruction fetched from ROM
                    state <= DECODE;
                    data_req <= 1'b0;
                    data_we <= 1'b0;
                end
                
                DECODE: begin
                    // Decode and move to execute
                    state <= EXECUTE;
                end
                
                EXECUTE: begin
                    // Execute instruction
                    branch_taken = 1'b0;
                    next_pc = pc + 4;  // Default: next instruction
                    
                    if (is_lui) begin
                        // LUI: rd = imm_u
                        alu_result = imm_u;
                        if (rd != 0) regs[rd] <= alu_result;
                        state <= FETCH;
                        pc <= next_pc;
                        
                    end else if (is_addi) begin
                        // ADDI: rd = rs1 + imm_i
                        alu_result = regs[rs1] + imm_i;
                        if (rd != 0) regs[rd] <= alu_result;
                        state <= FETCH;
                        pc <= next_pc;
                        
                    end else if (is_sw) begin
                        // SW: mem[rs1 + imm_s] = rs2
                        data_addr <= regs[rs1] + imm_s;
                        data_wdata <= regs[rs2];
                        data_be <= 4'b1111;  // Write all bytes
                        data_req <= 1'b1;
                        data_we <= 1'b1;
                        state <= MEMORY;
                        
                    end else if (is_bne) begin
                        // BNE: if (rs1 != rs2) pc += imm_b
                        if (regs[rs1] != regs[rs2]) begin
                            next_pc = pc + imm_b;
                            branch_taken = 1'b1;
                        end
                        state <= FETCH;
                        pc <= next_pc;
                        
                    end else if (is_jal) begin
                        // JAL: rd = pc+4, pc += imm_j
                        if (rd != 0) regs[rd] <= pc + 4;
                        next_pc = pc + imm_j;
                        state <= FETCH;
                        pc <= next_pc;
                        
                    end else begin
                        // Unknown instruction - NOP
                        state <= FETCH;
                        pc <= next_pc;
                    end
                end
                
                MEMORY: begin
                    // Memory operation complete
                    data_req <= 1'b0;
                    data_we <= 1'b0;
                    state <= FETCH;
                    pc <= pc + 4;
                end
                
                default: begin
                    state <= FETCH;
                end
            endcase
            
            // x0 always remains 0
            regs[0] <= 32'h0;
        end
    end

endmodule
