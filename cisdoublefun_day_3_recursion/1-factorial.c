/* Factorial
This is a RECURSIVE function that returns the factorial of a given number
Returns -1 (indicating error) if n is < 0, returns factor of Number, returns
-1 if result can not be stored in an int
*/
#include <limits.h>
int factorial(int n)
{

  if ((n < 0) || (n > INT_MAX))
  {
    return (-1);
  }
  if (n == 0)
  {
    return (1);
  }
  
  return (n * factorial(n - 1));
}
