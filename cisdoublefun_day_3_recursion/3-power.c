/* Power Function
This is an Recursive function that returns the value of x raised to the power of y
If y is lower than 0 return -1, if x is negative return -1, if result can't be stored
in an int, return -1
*/
#include <limits.h>
int power(int x, int y)
{
  int result;
  result = 1;

  if ((y < 0) || (result > INT_MAX) || (result < INT_MIN) || (x < 0))
    {
      return (-1);
    }
  else if (y == 0)
  {
    result = 1;
  }
  else
  {
    result = x * power (x, y - 1);
  }

  return (result);
}
