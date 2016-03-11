#include "2-print_array.h"
/* a function that prints each element of an array of integers. */

void print_array(int *a, int n)
{
  int index;

  for (index = 0; index <= n; index++)
    {
      if (index != (n-1)) 
	{
	  print_number(a[index]);
	  print_char(',');
	  print_char(' ');
	}
      else 
	{
	  print_number(a[index]);
	  print_char('\n');
	}
    }
}

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
