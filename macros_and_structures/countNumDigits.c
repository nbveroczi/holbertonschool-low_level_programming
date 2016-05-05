#include "countNumDigits.h"

/* Counts number of digits in n */
int countNumDigits(int n)
{
  int numDigits, remainingDigits;

  remainingDigits = n;

  for (numDigits = 0; remainingDigits > 0; numDigits++)
    {
      remainingDigits = remainingDigits / 10;
    }
  return numDigits;
}
