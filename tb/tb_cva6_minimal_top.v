`timescale 1ns / 1ps
// ============================================================================
// Testbench for CVA6 Minimal RISC-V System
// ============================================================================
// Description:
//   Comprehensive testbench for RISC-V processor LED blink program.
//   Tests processor instruction execution, memory operations, and LED control.
//
// Test Duration: 5ms simulation (LED blinks at 1Hz, so only 1 toggle expected)
// Pass Criteria: PC advances, instructions execute, and LED toggles at least once
//
// Note: Reset behavior matches PYNQ Z2 board (button pressed = reset active)
// ============================================================================

module tb_cva6_minimal_top;

    // ========================================================================
    // Testbench Parameters
    // ========================================================================
    parameter CLK_PERIOD = 8;  // 8ns = 125 MHz clock
    parameter RESET_CYCLES = 10;
    parameter SIM_TIME_US = 5000;  // Run for 5000 microseconds to observe LED behavior
    parameter VERBOSE_INSTR_LIMIT = 50;  // Show detailed traces for first N instructions only
    
    // ========================================================================
    // DUT Signals
    // ========================================================================
    reg          sys_clock;
    reg          sys_reset_n;
    wire  [3:0]  led;
    
    // ========================================================================
    // Testbench Variables
    // ========================================================================
    integer      cycle_count;
    integer      led_toggle_count;
    reg   [3:0]  led_prev;
    reg          test_passed;
    integer      instr_count;
    
    // ========================================================================
    // DUT Instantiation
    // ========================================================================
    cva6_minimal_top dut (
        .sys_clock   (sys_clock),
        .sys_reset_n (sys_reset_n),
        .led         (led)
    );
    
    // ========================================================================
    // Clock Generation
    // ========================================================================
    initial begin
        sys_clock = 1'b0;
        forever #(CLK_PERIOD/2) sys_clock = ~sys_clock;
    end
    
    // ========================================================================
    // Test Stimulus and Control
    // ========================================================================
    initial begin
        // Display test start
        $display("TEST START");
        $display("========================================================================");
        $display("CVA6 RISC-V Processor LED Blink Verification");
        $display("========================================================================");
        $display("Clock Period: %0d ns (125 MHz)", CLK_PERIOD);
        $display("Simulation Duration: %0d us", SIM_TIME_US);
        $display("========================================================================");
        
        // Initialize signals
        sys_reset_n = 1'b1;  // Button pressed = reset active (board-specific behavior)
        cycle_count = 0;
        led_toggle_count = 0;
        led_prev = 4'b0;
        test_passed = 1'b0;
        instr_count = 0;
        
        // Apply reset
        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.reset : expected_value: 1 actual_value: %0b", $time, dut.reset);
        repeat(RESET_CYCLES) @(posedge sys_clock);
        
        // Release reset (release button)
        sys_reset_n = 1'b0;
        @(posedge sys_clock);
        $display("LOG: %0t : INFO : tb_cva6_minimal_top : sys_reset_n : expected_value: 0 actual_value: %0b", $time, sys_reset_n);
        $display("========================================================================");
        $display("Starting RISC-V Processor Execution...");
        $display("========================================================================");
        
        // Wait for a few clock cycles to observe processor startup
        repeat(20) @(posedge sys_clock);
        
        // Check that processor has started
        if (dut.u_riscv_core.pc !== 32'h0 && !dut.reset) begin
            $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.pc : expected_value: >0 actual_value: 0x%0h", $time, dut.u_riscv_core.pc);
        end
        
        // Run simulation for specified duration
        #(SIM_TIME_US * 1000);
        
        // End of simulation analysis
        $display("========================================================================");
        $display("Simulation Complete - Analyzing Results");
        $display("========================================================================");
        $display("Total Clock Cycles: %0d", cycle_count);
        $display("Instructions Executed: %0d", instr_count);
        $display("LED Toggle Events: %0d", led_toggle_count);
        $display("Final LED State: %04b", led);
        $display("Final PC: 0x%0h", dut.u_riscv_core.pc);
        $display("========================================================================");
        
        // Test pass criteria
        // Note: LED blink program runs at ~1Hz, so in 5ms we expect only 1 toggle
        if (led_toggle_count >= 1) begin
            test_passed = 1'b1;
            $display("PASS: LED toggled %0d times - processor wrote to LED register", led_toggle_count);
        end else begin
            test_passed = 1'b0;
            $display("ERROR: LED toggle count (%0d) - no LED activity detected", led_toggle_count);
            $display("LOG: %0t : ERROR : tb_cva6_minimal_top : led_toggle_count : expected_value: >=1 actual_value: %0d", $time, led_toggle_count);
        end
        
        // Check if processor is alive (PC should have advanced)
        if (dut.u_riscv_core.pc > 32'h10) begin
            $display("PASS: Program Counter advanced to 0x%0h - processor is executing", dut.u_riscv_core.pc);
        end else begin
            $display("ERROR: Program Counter stuck at 0x%0h", dut.u_riscv_core.pc);
            $display("LOG: %0t : ERROR : tb_cva6_minimal_top : dut.u_riscv_core.pc : expected_value: >0x10 actual_value: 0x%0h", $time, dut.u_riscv_core.pc);
            test_passed = 1'b0;
        end
        
        // Check instruction execution count
        if (instr_count > 1000) begin
            $display("PASS: Executed %0d instructions - processor running normally", instr_count);
        end else begin
            $display("ERROR: Only executed %0d instructions - processor may be stalled", instr_count);
            $display("LOG: %0t : ERROR : tb_cva6_minimal_top : instr_count : expected_value: >1000 actual_value: %0d", $time, instr_count);
            test_passed = 1'b0;
        end
        
        // Final test result
        $display("========================================================================");
        if (test_passed) begin
            $display("TEST PASSED");
        end else begin
            $display("ERROR");
            $error("TEST FAILED: RISC-V processor did not execute LED blink program correctly");
        end
        $display("========================================================================");
        
        $finish;
    end
    
    // ========================================================================
    // Cycle Counter
    // ========================================================================
    always @(posedge sys_clock) begin
        if (!dut.reset) begin
            cycle_count <= cycle_count + 1;
        end
    end
    
    // ========================================================================
    // LED Monitor - Track LED Changes
    // ========================================================================
    always @(posedge sys_clock) begin
        if (!dut.reset) begin
            if (led[0] !== led_prev[0]) begin
                led_toggle_count <= led_toggle_count + 1;
                $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.led[0] : expected_value: toggle actual_value: %0b (Toggle #%0d)", 
                         $time, led[0], led_toggle_count + 1);
            end
            led_prev <= led;
        end
    end
    
    // ========================================================================
    // Processor State Monitor - Fetch/Decode/Execute Pipeline Display
    // ========================================================================
    reg [2:0] prev_state;
    reg [31:0] fetched_instr;
    
    always @(posedge sys_clock) begin
        if (!dut.reset) begin
            prev_state <= dut.u_riscv_core.state;
            
            // FETCH State - Instruction Fetch
            if (dut.u_riscv_core.state == 3'd0) begin  // FETCH
                if (prev_state != 3'd0 && instr_count <= VERBOSE_INSTR_LIMIT) begin  // State transition into FETCH
                    $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.state : expected_value: FETCH actual_value: FETCH (PC=0x%0h)", 
                             $time, dut.u_riscv_core.pc);
                end
                if (instr_count == VERBOSE_INSTR_LIMIT) begin
                    $display("========================================================================");
                    $display(">>> Detailed instruction trace limit reached (%0d instructions)", VERBOSE_INSTR_LIMIT);
                    $display(">>> Continuing execution with summary monitoring only...");
                    $display("========================================================================");
                end
                instr_count <= instr_count + 1;
                fetched_instr <= dut.instr_rdata;
            end
            
            // DECODE State - Instruction Decode
            if (dut.u_riscv_core.state == 3'd1) begin  // DECODE
                if (prev_state != 3'd1 && instr_count <= VERBOSE_INSTR_LIMIT) begin
                    $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.state : expected_value: DECODE actual_value: DECODE (Instr=0x%0h)", 
                             $time, fetched_instr);
                    
                    // Decode and display instruction type
                    if (dut.u_riscv_core.is_lui) begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.instr_type : expected_value: LUI actual_value: LUI (rd=x%0d, imm=0x%0h)", 
                                 $time, dut.u_riscv_core.rd, dut.u_riscv_core.imm_u);
                    end else if (dut.u_riscv_core.is_addi) begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.instr_type : expected_value: ADDI actual_value: ADDI (rd=x%0d, rs1=x%0d, imm=%0d)", 
                                 $time, dut.u_riscv_core.rd, dut.u_riscv_core.rs1, $signed(dut.u_riscv_core.imm_i));
                    end else if (dut.u_riscv_core.is_sw) begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.instr_type : expected_value: SW actual_value: SW (rs1=x%0d, rs2=x%0d, offset=%0d)", 
                                 $time, dut.u_riscv_core.rs1, dut.u_riscv_core.rs2, $signed(dut.u_riscv_core.imm_s));
                    end else if (dut.u_riscv_core.is_bne) begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.instr_type : expected_value: BNE actual_value: BNE (rs1=x%0d, rs2=x%0d, offset=%0d)", 
                                 $time, dut.u_riscv_core.rs1, dut.u_riscv_core.rs2, $signed(dut.u_riscv_core.imm_b));
                    end else if (dut.u_riscv_core.is_jal) begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.instr_type : expected_value: JAL actual_value: JAL (rd=x%0d, offset=%0d)", 
                                 $time, dut.u_riscv_core.rd, $signed(dut.u_riscv_core.imm_j));
                    end else begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.instr_type : expected_value: UNKNOWN actual_value: NOP (Instr=0x%0h)", 
                                 $time, fetched_instr);
                    end
                end
            end
            
            // EXECUTE State - Instruction Execute
            if (dut.u_riscv_core.state == 3'd2) begin  // EXECUTE
                if (prev_state != 3'd2 && instr_count <= VERBOSE_INSTR_LIMIT) begin
                    $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.state : expected_value: EXECUTE actual_value: EXECUTE", $time);
                    
                    // Display register file reads and execution
                    if (dut.u_riscv_core.is_lui) begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.alu_result : expected_value: 0x%0h actual_value: Writing x%0d = 0x%0h", 
                                 $time, dut.u_riscv_core.imm_u, dut.u_riscv_core.rd, dut.u_riscv_core.imm_u);
                    end else if (dut.u_riscv_core.is_addi) begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.alu_result : expected_value: computed actual_value: x%0d = x%0d(0x%0h) + %0d = 0x%0h", 
                                 $time, dut.u_riscv_core.rd, dut.u_riscv_core.rs1, 
                                 dut.u_riscv_core.regs[dut.u_riscv_core.rs1], $signed(dut.u_riscv_core.imm_i),
                                 dut.u_riscv_core.regs[dut.u_riscv_core.rs1] + dut.u_riscv_core.imm_i);
                    end else if (dut.u_riscv_core.is_sw) begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.memory_op : expected_value: SW actual_value: MEM[0x%0h] = x%0d(0x%0h)", 
                                 $time, dut.u_riscv_core.regs[dut.u_riscv_core.rs1] + dut.u_riscv_core.imm_s,
                                 dut.u_riscv_core.rs2, dut.u_riscv_core.regs[dut.u_riscv_core.rs2]);
                    end else if (dut.u_riscv_core.is_bne) begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.branch : expected_value: compare actual_value: x%0d(0x%0h) != x%0d(0x%0h) ? %s", 
                                 $time, dut.u_riscv_core.rs1, dut.u_riscv_core.regs[dut.u_riscv_core.rs1],
                                 dut.u_riscv_core.rs2, dut.u_riscv_core.regs[dut.u_riscv_core.rs2],
                                 (dut.u_riscv_core.regs[dut.u_riscv_core.rs1] != dut.u_riscv_core.regs[dut.u_riscv_core.rs2]) ? "TAKEN" : "NOT_TAKEN");
                    end else if (dut.u_riscv_core.is_jal) begin
                        $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.jump : expected_value: JAL actual_value: PC = 0x%0h + %0d = 0x%0h, x%0d = 0x%0h", 
                                 $time, dut.u_riscv_core.pc, $signed(dut.u_riscv_core.imm_j),
                                 dut.u_riscv_core.pc + dut.u_riscv_core.imm_j,
                                 dut.u_riscv_core.rd, dut.u_riscv_core.pc + 4);
                    end
                end
            end
            
            // MEMORY State - Memory Access
            if (dut.u_riscv_core.state == 3'd3) begin  // MEMORY
                if (prev_state != 3'd3) begin
                    $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.state : expected_value: MEMORY actual_value: MEMORY (addr=0x%0h, data=0x%0h)", 
                             $time, dut.data_addr, dut.data_wdata);
                end
            end
        end
    end
    
    // ========================================================================
    // Memory Write Monitor - Shows all memory operations
    // ========================================================================
    always @(posedge sys_clock) begin
        if (!dut.reset) begin
            if (dut.data_req && dut.data_we) begin
                // Determine where data is being written
                if (dut.led_select) begin
                    $display("========================================================================");
                    $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.led_reg : expected_value: write actual_value: 0x%0h", 
                             $time, dut.data_wdata);
                    $display(">>> MEMORY WRITE: LED Register @ 0x%0h <-- 0x%0h (LED[0]=%0b)", 
                             dut.data_addr, dut.data_wdata, dut.data_wdata[0]);
                    $display("========================================================================");
                end else if (dut.ram_select) begin
                    $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_data_ram : expected_value: write actual_value: DATA_RAM[0x%0h] <-- 0x%0h", 
                             $time, dut.data_addr, dut.data_wdata);
                    $display(">>> MEMORY WRITE: Data RAM @ 0x%0h <-- 0x%0h (byte_enable=0b%04b)", 
                             dut.data_addr, dut.data_wdata, dut.data_be);
                end else begin
                    $display("LOG: %0t : WARNING : tb_cva6_minimal_top : dut.data_addr : expected_value: valid_range actual_value: 0x%0h (Unknown address)", 
                             $time, dut.data_addr);
                end
            end
        end
    end
    
    // ========================================================================
    // Memory Read Monitor - Shows data being read from memory
    // ========================================================================
    always @(posedge sys_clock) begin
        if (!dut.reset) begin
            if (dut.data_req && !dut.data_we) begin
                if (dut.led_select) begin
                    $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.led_reg : expected_value: read actual_value: 0x%0h", 
                             $time, dut.led_reg);
                    $display(">>> MEMORY READ: LED Register @ 0x%0h --> 0x%0h", 
                             dut.data_addr, dut.led_reg);
                end else if (dut.ram_select) begin
                    $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_data_ram : expected_value: read actual_value: DATA_RAM[0x%0h] --> 0x%0h", 
                             $time, dut.data_addr, dut.data_rdata);
                    $display(">>> MEMORY READ: Data RAM @ 0x%0h --> 0x%0h", 
                             dut.data_addr, dut.data_rdata);
                end
            end
        end
    end
    
    // ========================================================================
    // Register File Monitor - Display register writes for key registers
    // ========================================================================
    integer reg_idx;
    reg [31:0] prev_regs [0:10];  // Monitor x0-x10
    
    initial begin
        for (reg_idx = 0; reg_idx <= 10; reg_idx = reg_idx + 1) begin
            prev_regs[reg_idx] = 32'h0;
        end
    end
    
    always @(posedge sys_clock) begin
        if (!dut.reset) begin
            // Monitor key registers (x0-x10)
            for (reg_idx = 1; reg_idx <= 10; reg_idx = reg_idx + 1) begin
                if (dut.u_riscv_core.regs[reg_idx] !== prev_regs[reg_idx]) begin
                    $display("LOG: %0t : INFO : tb_cva6_minimal_top : dut.u_riscv_core.regs[%0d] : expected_value: updated actual_value: x%0d = 0x%0h (was 0x%0h)", 
                             $time, reg_idx, reg_idx, dut.u_riscv_core.regs[reg_idx], prev_regs[reg_idx]);
                    $display(">>> REGISTER UPDATE: x%0d = 0x%08h", reg_idx, dut.u_riscv_core.regs[reg_idx]);
                    prev_regs[reg_idx] = dut.u_riscv_core.regs[reg_idx];
                end
            end
        end
    end
    
    // ========================================================================
    // Timeout Protection
    // ========================================================================
    initial begin
        #(SIM_TIME_US * 1000 + 1000);
        $display("LOG: %0t : WARNING : tb_cva6_minimal_top : simulation_time : expected_value: <timeout actual_value: timeout", $time);
        $display("Warning: Simulation timeout - this is expected for continuous operation");
    end
    
    // ========================================================================
    // Reset Monitor
    // ========================================================================
    always @(posedge sys_clock) begin
        if (dut.reset && cycle_count > RESET_CYCLES) begin
            $display("LOG: %0t : WARNING : tb_cva6_minimal_top : dut.reset : expected_value: 0 actual_value: %0b (Unexpected reset)", 
                     $time, dut.reset);
        end
    end
    
    // ========================================================================
    // Waveform Dump
    // ========================================================================
    initial begin
        $dumpfile("dumpfile.fst");
        $dumpvars(0);
    end

endmodule
