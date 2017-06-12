/*
 *Jakob Fowler
 *Program #2
 *Blinking LED
 *06/12/17 
*/
#include "simpletools.h"                    

int main()                                    // Main function
{
  

 
  while(1)
  {
   high(0);
   pause(35);
   low(0);
   pause(35);
   high(7);
   pause(35);
   low(7);
   pause(35);
  }  
}
