#include "my_functions.h"
/* This function returns the absolute value
   of an integer.
*/
int absolute(int n) 
{
  if (n < 0) 
  {
    return (n = -n);
  }
  return n;  
}
