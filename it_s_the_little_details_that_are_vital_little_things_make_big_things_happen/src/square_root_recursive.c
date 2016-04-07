#include "power.h"
#include "square_root_recursive.h"

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
