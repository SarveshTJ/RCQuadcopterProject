#include <AP_Common.h>
#include <AP_Math.h>
#include <AP_Param.h>
#include <AP_Progmem.h>
#include <AP_ADC.h>
#include <AP_InertialSensor.h>

#include <AP_HAL.h>
#include <AP_HAL_AVR.h>

const AP_HAL::HAL& hal = AP_HAL_AVR_APM2;  // Hardware abstraction layer

void setup() 
{

}

void loop() 
{
  uint16_t channels[8];  // array for raw channel values
  
  // Read RC channels and store in channels array
  hal.rcin->read(channels, 8);
  
  // Copy from channels array to something human readable - array entry 0 = input 1, etc.
  uint16_t rcthr, rcyaw, rcpit, rcroll;   // Variables to store rc input
  rcthr = channels[2];  
  rcyaw = channels[3];
  rcpit = channels[1];
  rcroll = channels[0];

  hal.console->printf_P(
            PSTR("individual read THR %d YAW %d PIT %d ROLL %d\r\n"),
            rcthr, rcyaw, rcpit, rcroll);

  hal.scheduler->delay(50);  //Wait 50ms 
}

AP_HAL_MAIN();    // special macro that replace's one of Arduino's to setup the code (e.g. ensure loop() is called in a loop).
