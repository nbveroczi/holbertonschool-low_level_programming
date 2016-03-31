#include "0-factorial.h"
/* This is a function that returns the factorial of a given number. */

int factorial(int n)
{
  int result;
  
  if (n < 0)
    {
      result = -1;
    }
  else if (n == 0 || n == 1) 
    {
      result = 1;
    }
  else
    {
      result = n * factorial(n - 1);
    }

  return(result);
}
