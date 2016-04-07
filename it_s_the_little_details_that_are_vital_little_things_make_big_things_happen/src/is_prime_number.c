#include "is_prime_number.h"
#include "is_prime_number_recursive.h"
/* This is a function that returns 1 if a number is a prime number, 0 otherwise. */

int is_prime_number(int n)
{
  return is_prime_number_recursive(n, n/2);
}
