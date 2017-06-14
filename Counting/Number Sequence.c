
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  int x = 33;
  
  while (x < 128)
  {
   print("%c\n", x);
   x = x + 1;
  }
   print("Done!");
}
