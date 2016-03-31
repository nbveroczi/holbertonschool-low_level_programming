#include "3-is_prime_number.h"
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

/* This is a function that returns 1 if a number is a prime number, 0 otherwise. */

int is_prime_number(int n)
{
  return is_prime_number_recursive(n, n/2);
}
