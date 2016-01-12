/*====================================================================================================*/
/*====================================================================================================*/
#include "drivers\nrf51_system.h"
#include "drivers\nrf51_clock.h"

#include "experiment_nrf51.h"
/*====================================================================================================*/
/*====================================================================================================*/
void System_Init( void )
{
  CLOCK_SourceXTAL(NRF_CLOCK_XTALFREQ_16MHz);
  CLOCK_SourceLFCLK(NRF_CLOCK_LF_SRC_RC);
  CLOCK_CmdHFCLK(ENABLE);
  CLOCK_CmdLFCLK(ENABLE);

  GPIO_Config();
}
int main( void )
{
  System_Init();

  while(1) {
    nrf_gpio_pin_toggle(1);
    nrf_gpio_pin_toggle(2);
    nrf_gpio_pin_toggle(3);
    nrf_gpio_pin_toggle(4);
    nrf_gpio_pin_toggle(5);
    nrf_gpio_pin_toggle(6);
    nrf_gpio_pin_toggle(8);
    Delay_10ms(8);
  }
}
/*====================================================================================================*/
/*====================================================================================================*/
void GPIO_Config( void )
{
  nrf_gpio_cfg_output(1);
  nrf_gpio_cfg_output(2);
  nrf_gpio_cfg_output(3);
  nrf_gpio_cfg_output(4);
  nrf_gpio_cfg_output(5);
  nrf_gpio_cfg_output(6);
  nrf_gpio_cfg_output(8);
}
/*====================================================================================================*/
/*====================================================================================================*/
