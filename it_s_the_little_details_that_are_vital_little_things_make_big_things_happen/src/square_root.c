#include "power.h"
#include "square_root_recursive.h"
#include "square_root.h"

/* This is a function that returns the natural square root of a number. */
int square_root(int n)
{
  int base;
  base = 1;
  return square_root_recursive(base, n);
}
