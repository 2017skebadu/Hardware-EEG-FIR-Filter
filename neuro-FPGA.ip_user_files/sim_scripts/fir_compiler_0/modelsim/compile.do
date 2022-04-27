vlib modelsim_lib/work
vlib modelsim_lib/msim

vlib modelsim_lib/msim/xil_defaultlib

vmap xil_defaultlib modelsim_lib/msim/xil_defaultlib

vlog -work xil_defaultlib  -incr \
"../../../../neuro-FPGA.gen/sources_1/ip/fir_compiler_0/fir_compiler_0_sim_netlist.v" \


vlog -work xil_defaultlib \
"glbl.v"

