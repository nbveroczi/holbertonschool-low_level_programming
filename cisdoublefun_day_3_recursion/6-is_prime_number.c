/* Prime Number Detector
This is a recursive function that determines if a number is a prime number or not.
Returns 1 if number is a prime else 0. */
int is_prime_number_recursive(int num,int divisor);
int is_prime_number(int n)
{
  return is_prime_number_recursive(n, n/2);
}

int is_prime_number_recursive(int num,int divisor)
{
  int result;
  result = 0;

  if (num > 1)
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

/* A Prime Number can be divided evenly only by 1 or itself.
And it must be a whole number greater than 1 */
