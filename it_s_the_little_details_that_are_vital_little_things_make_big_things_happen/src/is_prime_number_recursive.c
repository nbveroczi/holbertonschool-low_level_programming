#include "is_prime_number_recursive.h"

/* This is a function that checks to see if a number is a prime number */

int is_prime_number_recursive(int num,int divisor)
{
  int result;
  result = 0;

  if (num >= 2)
    {
      if (divisor == 1)
	{
	  result = 1;
	}
      else if (num % divisor != 0)
	{
	  result = is_prime_number_recursive(num, divisor - 1);
	}
    }

  return result;
}

