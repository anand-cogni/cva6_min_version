#!/usr/bin/bash

./obj_dir/sim.exe +verilator+seed+98160153 2>&1 | tee sim.log && test ${PIPESTATUS} -eq 0 

