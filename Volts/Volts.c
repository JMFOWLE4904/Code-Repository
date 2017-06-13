/*
 *Jakob Fowler
 *Pragram #4
 *Measure Voltage using a potetiometer
 *06/13/17 
*/
#include "simpletools.h"                      // Include simple tools
#include "adcDCpropab.h"
int main()                                    // Main function
{
  adc_init(21,20,19,18);
  float volts;
  
  while(1)
  {
    volts = adc_volts(3);
    putChar(HOME);
    print("A/D Channel 3 = %0.5f Volts %c/n", volts, CLREOL);
    pause(1);
    
    high(15);
    pause(volts*100+10);
    low(15);
    pause(volts*100+10);
  }  
}
