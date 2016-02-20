#include "my_functions.h"

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

/* This function prints a number in decimal format */
void print_number(int n)
{
  int digit, numDigits, divisor, remainder;

  if (n < 0) {
    n = -n;
    print_char('-');
  }
  else if (n == 0) {
    print_char('0');
    return;
  }

  numDigits = countNumDigits(n);
  divisor = powerOfTen(numDigits - 1);
  remainder = n;

  for (;numDigits > 0; numDigits--) {
    digit = remainder / divisor;
    print_char('0' + digit);
    remainder -= (digit * divisor);
    divisor = divisor / 10;
  }
}
