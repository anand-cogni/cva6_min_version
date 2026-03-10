#!/usr/bin/env python3
"""
CVA6 UART Output Extractor
Extracts and decodes UART messages from simulation log
"""

import re
import sys

def extract_uart_data(log_file):
    """Extract UART writes from simulation log and decode to ASCII"""
    
    uart_writes = []
    
    with open(log_file, 'r') as f:
        for line in f:
            # Look for UART writes: MEM[0x21000000] = 0xXX
            match = re.search(r'MEM\[0x21000000\]\s*=\s*x\d+\((0x[0-9a-fA-F]+)\)', line)
            if match:
                hex_value = match.group(1)
                uart_writes.append(int(hex_value, 16))
    
    return uart_writes

def decode_to_ascii(bytes_list):
    """Convert list of byte values to ASCII string"""
    result = []
    for byte_val in bytes_list:
        if 32 <= byte_val <= 126:  # Printable ASCII
            result.append(chr(byte_val))
        elif byte_val == 10:  # Newline
            result.append('\n')
        elif byte_val == 13:  # Carriage return
            pass  # Skip CR
        else:
            result.append(f'[0x{byte_val:02x}]')
    return ''.join(result)

def main():
    log_file = 'sim/eda.work/bench_cva6_hbm3.sim/sim.log'
    
    if len(sys.argv) > 1:
        log_file = sys.argv[1]
    
    print("=" * 80)
    print("CVA6 UART OUTPUT EXTRACTOR")
    print("=" * 80)
    print(f"\nReading from: {log_file}\n")
    
    try:
        uart_bytes = extract_uart_data(log_file)
        
        print(f"Found {len(uart_bytes)} UART byte writes\n")
        
        if uart_bytes:
            print("-" * 80)
            print("RAW UART DATA (Hex):")
            print("-" * 80)
            for i, byte_val in enumerate(uart_bytes[:50]):  # Show first 50
                if i > 0 and i % 16 == 0:
                    print()
                print(f"{byte_val:02x} ", end='')
            print("\n")
            
            print("-" * 80)
            print("DECODED UART OUTPUT:")
            print("-" * 80)
            decoded = decode_to_ascii(uart_bytes)
            print(decoded)
            print()
            
            print("-" * 80)
            print("DETAILED BREAKDOWN (First 30 bytes):")
            print("-" * 80)
            print(f"{'Byte':<6} {'Hex':<8} {'Dec':<8} {'ASCII':<10} {'Char'}")
            print("-" * 60)
            for i, byte_val in enumerate(uart_bytes[:30]):
                char = chr(byte_val) if 32 <= byte_val <= 126 else f'[0x{byte_val:02x}]'
                char_repr = repr(chr(byte_val)) if 32 <= byte_val <= 126 else f'\\x{byte_val:02x}'
                print(f"{i+1:<6} 0x{byte_val:02x}    {byte_val:<8} {char_repr:<10} {char}")
            
        else:
            print("⚠ WARNING: No UART writes found in log file!")
            print("Check that simulation completed successfully.")
    
    except FileNotFoundError:
        print(f"❌ ERROR: Log file not found: {log_file}")
        print("\nRun simulation first:")
        print("  cd sim && eda sim bench_cva6_hbm3")
        sys.exit(1)
    
    print()
    print("=" * 80)
    print("✅ UART EXTRACTION COMPLETE")
    print("=" * 80)

if __name__ == "__main__":
    main()
