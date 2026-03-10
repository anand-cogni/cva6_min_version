#################################################
# VCS Setup
#################################################

VCS = vcs
TOP = tb_cva6_minimal_top

#################################################
# Compile
#################################################

compile:
	$(VCS) -full64 \
	-sverilog \
	-timescale=1ns/1ps \
	-debug_access+all \
	-kdb \
	-l compile.log \
	-f filelist.f \
	-top $(TOP)

#################################################
# Run Simulation
#################################################

run:
	./simv | tee sim.log

#################################################
# Verdi Waveform
#################################################

verdi:
	verdi -ssf dump.fsdb &

#################################################
# Clean
#################################################

clean:
	rm -rf simv simv.daidir csrc ucli.key \
	verdiLog novas* *.fsdb *.log
