
//------------------------------------------------------------------------------
// (c) Copyright 2014 Xilinx, Inc. All rights reserved.
//
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
//
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
//
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
//
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
//------------------------------------------------------------------------------ 
//
// C Model configuration for the "fir_compiler_0" instance.
//
//------------------------------------------------------------------------------
//
// coefficients: 13,4,2,4,1,3,0,1,-2,-1,-4,-3,-5,-3,-4,-3,-3,-1,-1,1,1,3,2,3,3,3,2,2,1,1,0,0,0,0,0,1,1,2,2,2,2,1,0,-1,-3,-4,-6,-7,-8,-8,-8,-6,-5,-2,1,4,7,10,12,13,14,13,12,9,6,2,-2,-6,-10,-13,-15,-15,-15,-14,-11,-8,-5,-1,2,5,8,9,10,9,8,6,4,3,1,0,0,0,1,3,5,7,8,9,8,6,3,-1,-6,-12,-18,-23,-27,-30,-30,-28,-23,-16,-6,5,16,28,38,46,52,53,51,45,35,22,6,-11,-28,-44,-57,-66,-71,-70,-65,-55,-40,-22,-2,18,37,54,67,75,78,75,67,54,37,18,-2,-22,-40,-55,-65,-70,-71,-66,-57,-44,-28,-11,6,22,35,45,51,53,52,46,38,28,16,5,-6,-16,-23,-28,-30,-30,-27,-23,-18,-12,-6,-1,3,6,8,9,8,7,5,3,1,0,0,0,1,3,4,6,8,9,10,9,8,5,2,-1,-5,-8,-11,-14,-15,-15,-15,-13,-10,-6,-2,2,6,9,12,13,14,13,12,10,7,4,1,-2,-5,-6,-8,-8,-8,-7,-6,-4,-3,-1,0,1,2,2,2,2,1,1,0,0,0,0,0,1,1,2,2,3,3,3,2,3,1,1,-1,-1,-3,-3,-4,-3,-5,-3,-4,-1,-2,1,0,3,1,4,2,4,13
// chanpats: 173
// name: fir_compiler_0
// filter_type: 0
// rate_change: 0
// interp_rate: 1
// decim_rate: 1
// zero_pack_factor: 1
// coeff_padding: 0
// num_coeffs: 285
// coeff_sets: 1
// reloadable: 0
// is_halfband: 0
// quantization: 0
// coeff_width: 8
// coeff_fract_width: 0
// chan_seq: 0
// num_channels: 1
// num_paths: 1
// data_width: 12
// data_fract_width: 0
// output_rounding_mode: 1
// output_width: 8
// output_fract_width: 0
// config_method: 0

const double fir_compiler_0_coefficients[285] = {13,4,2,4,1,3,0,1,-2,-1,-4,-3,-5,-3,-4,-3,-3,-1,-1,1,1,3,2,3,3,3,2,2,1,1,0,0,0,0,0,1,1,2,2,2,2,1,0,-1,-3,-4,-6,-7,-8,-8,-8,-6,-5,-2,1,4,7,10,12,13,14,13,12,9,6,2,-2,-6,-10,-13,-15,-15,-15,-14,-11,-8,-5,-1,2,5,8,9,10,9,8,6,4,3,1,0,0,0,1,3,5,7,8,9,8,6,3,-1,-6,-12,-18,-23,-27,-30,-30,-28,-23,-16,-6,5,16,28,38,46,52,53,51,45,35,22,6,-11,-28,-44,-57,-66,-71,-70,-65,-55,-40,-22,-2,18,37,54,67,75,78,75,67,54,37,18,-2,-22,-40,-55,-65,-70,-71,-66,-57,-44,-28,-11,6,22,35,45,51,53,52,46,38,28,16,5,-6,-16,-23,-28,-30,-30,-27,-23,-18,-12,-6,-1,3,6,8,9,8,7,5,3,1,0,0,0,1,3,4,6,8,9,10,9,8,5,2,-1,-5,-8,-11,-14,-15,-15,-15,-13,-10,-6,-2,2,6,9,12,13,14,13,12,10,7,4,1,-2,-5,-6,-8,-8,-8,-7,-6,-4,-3,-1,0,1,2,2,2,2,1,1,0,0,0,0,0,1,1,2,2,3,3,3,2,3,1,1,-1,-1,-3,-3,-4,-3,-5,-3,-4,-1,-2,1,0,3,1,4,2,4,13};

const xip_fir_v7_2_pattern fir_compiler_0_chanpats[1] = {P_BASIC};

static xip_fir_v7_2_config gen_fir_compiler_0_config() {
  xip_fir_v7_2_config config;
  config.name                = "fir_compiler_0";
  config.filter_type         = 0;
  config.rate_change         = XIP_FIR_INTEGER_RATE;
  config.interp_rate         = 1;
  config.decim_rate          = 1;
  config.zero_pack_factor    = 1;
  config.coeff               = &fir_compiler_0_coefficients[0];
  config.coeff_padding       = 0;
  config.num_coeffs          = 285;
  config.coeff_sets          = 1;
  config.reloadable          = 0;
  config.is_halfband         = 0;
  config.quantization        = XIP_FIR_INTEGER_COEFF;
  config.coeff_width         = 8;
  config.coeff_fract_width   = 0;
  config.chan_seq            = XIP_FIR_BASIC_CHAN_SEQ;
  config.num_channels        = 1;
  config.init_pattern        = fir_compiler_0_chanpats[0];
  config.num_paths           = 1;
  config.data_width          = 12;
  config.data_fract_width    = 0;
  config.output_rounding_mode= XIP_FIR_TRUNCATE_LSBS;
  config.output_width        = 8;
  config.output_fract_width  = 0,
  config.config_method       = XIP_FIR_CONFIG_SINGLE;
  return config;
}

const xip_fir_v7_2_config fir_compiler_0_config = gen_fir_compiler_0_config();

