
#include "simpletools.h"                      

int main()                                   
{
  
 
  while(1)
  {
 /* If you use a different circut than I did which was a pressesd low circut 
    you must change the if statement from asking low to asking high, 0 to 1*/
   
    if (input(0) == 0)   
    {
     putChar(HOME);
     print("The button is pressed %c\n", CLREOL);
     high(26);
     low(27);
    }
    else
    {
    putChar(HOME);
    print("The button is not pressed %c\n", CLREOL);
    low(26);
    high(27);
    }            
     pause(100);
  }  
}
