/* Power Function
This is an iterative function that returns the value of x raised to the power of y
If y is lower than 0 return -1, if x is negative return -1, if result can't be stored
in an int, return -1
*/
#include <limits.h>
int power(int x, int y)
{
  int result;
  int i;
  result = 1;
  i = 0;

  if ((y < 0) || (result > INT_MAX) || (result < INT_MIN) || (x < 0))
    {
      return (-1);
    }
  while (i < y)
  {
      result = result * x;
      i++;
  }
  return (result);

}
