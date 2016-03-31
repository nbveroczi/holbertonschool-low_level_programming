#include "2-square_root.h"
/* This is a function that returns the value of x raised to the power of y. */

int power(int x, int y)
{
  int result;

  if (y < 0)
    {
      result = -1;
    }
  else if (y == 0)
    {
      result = 1;
    }
  else
    {
      result = x * power(x, y - 1);
    }

  return(result);
}

/* This is a function that compares base squared and n */
int square_root_recursive(int base, int n)
{
  int result, square;
  square = power(base,2);

  if (n < square)
    {
      result = -1;
    }
  else if (n > square)
    {
      result = square_root_recursive(++base, n);
    }
  else
    {
      result = base;
    }
  return result;
}

/* This is a function that returns the natural square root of a number. */
int square_root(int n)
{
  int base;
  base = 1;
  return square_root_recursive(base, n);
}
