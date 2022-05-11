----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 04/27/2022 07:38:38 AM
-- Design Name: 
-- Module Name: XADC_main - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity XADC_main is
    Port ( clk : in STD_LOGIC;
           sw : in STD_LOGIC;
           led : out STD_LOGIC_VECTOR (15 downto 0);
           JA : in STD_LOGIC_VECTOR (7 downto 0);
    	   JB : out STD_LOGIC_VECTOR (7 downto 0));
end XADC_main;

architecture Behavioral of XADC_main is

signal channel_out : std_logic_vector(4 downto 0);
signal daddr_in  : std_logic_vector(6 downto 0);
signal eoc_out, strb : std_logic;
signal do_out, x_16bits  : std_logic_vector(15 downto 0);  
signal anal_p, anal_n : std_logic; 
signal count : integer range 0 to 1000000;
signal convst : std_logic;
signal x : std_logic_vector(11 downto 0);
signal y : std_logic_vector(7 downto 0);

COMPONENT fir_compiler_0
  PORT (
    aclk : IN STD_LOGIC;
    s_axis_data_tvalid : IN STD_LOGIC;
    s_axis_data_tready : OUT STD_LOGIC;
    s_axis_data_tdata : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    m_axis_data_tvalid : OUT STD_LOGIC;
    m_axis_data_tdata : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
  );
END COMPONENT;

--Component ila_0
--  Port ( 
--    clk : in STD_LOGIC;
--    probe0 : in STD_LOGIC_VECTOR ( 7 downto 0 );
--    probe1 : in STD_LOGIC_VECTOR ( 7 downto 0 )
--  );
--END COMPONENT;

COMPONENT xadc_wiz_0
  PORT (
    di_in : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    daddr_in : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
    den_in : IN STD_LOGIC;
    dwe_in : IN STD_LOGIC;
    drdy_out : OUT STD_LOGIC;
    do_out : OUT STD_LOGIC_VECTOR(15 DOWNTO 0);
    dclk_in : IN STD_LOGIC;
    reset_in : IN STD_LOGIC;
    convst_in : IN STD_LOGIC;
    vp_in : IN STD_LOGIC;
    vn_in : IN STD_LOGIC;
    vauxp5 : IN STD_LOGIC;
    vauxn5 : IN STD_LOGIC;
    channel_out : OUT STD_LOGIC_VECTOR(4 DOWNTO 0);
    eoc_out : OUT STD_LOGIC;
    alarm_out : OUT STD_LOGIC;
    eos_out : OUT STD_LOGIC;
    busy_out : OUT STD_LOGIC
  );
END COMPONENT;
begin
	
	five_Hz : fir_compiler_0
	PORT MAP (
		aclk => clk,
		s_axis_data_tvalid => eoc_out,
		s_axis_data_tready => open,
		s_axis_data_tdata => x_16bits,
		m_axis_data_tvalid => strb,
		m_axis_data_tdata => y
	);
	
--	Logic : ila_0
--	PORT MAP (
--		clk => clk,
--		probe0 => x(11 downto 4),
--		probe1 => y
--	);

	x <= (not do_out(15)) & do_out(14 downto 4);
	x_16bits <= "0000" & x;

	process(clk)
	begin
		if clk'event and clk='1' then
		 	if strb = '1' then
		 		JB <= (not y(7)) & y(6 downto 0);
		 	end if;
		end if;
	end process;

    inst_xadc : xadc_wiz_0 
    port map(
        daddr_in        => daddr_in,
        den_in          => eoc_out,
        di_in           => "0000000000000000",
        dwe_in          => '0',
        do_out          => do_out,
        drdy_out        => open,
        dclk_in         => clk,
        reset_in        => sw,
        convst_in       => convst,
        vauxp5          => anal_p,
        vauxn5          => anal_n,
        busy_out        => open,
        channel_out     => channel_out,
        eoc_out         => eoc_out,
        eos_out         => open,
        alarm_out       => open,
        vp_in           => '0',
        vn_in           => '0');
        
    daddr_in <= "00" & channel_out;
    anal_p <= JA(4);
    anal_n <= JA(0);
    led <= do_out(15 downto 8) &  (not y(7)) & y(6 downto 0);


-- for a sampling freq of 1 kHz, with a clk freq of 100 MHz
  process(clk)
  begin
      if clk'event and clk='1' then
          count <= count + 1;
          convst <= '0';
          if count >= 99999 then
              count <= 0;
              convst <= '1';
          end if;
      end if;
  end process;

end Behavioral;
