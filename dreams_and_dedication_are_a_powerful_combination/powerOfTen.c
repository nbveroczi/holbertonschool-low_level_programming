#include "powerOfTen.h"
/* This function calculates a power of ten given an exponent */
int powerOfTen(int exponent)
{
  int result, i;

  result = 1;

  for (i = 0; i < exponent; i++)
    {
      result = result * 10;
    }
  return result;
}
