#include "print_char.h"
/* Odd or Even in Binary
This is a function returning 0 if a number is odd otherwise E
return is 0 or E
*/

char odd(int n)
{

  if (n % 2 == 0)
  {
    print_char('E');
  }
  
  else 
  {
    print_char('0');
  }
 
  return 0;
}
