#include "print_char.h"

void print_last_digit(int n)
{
  char c; 
  int digit;

  if (n < 0)
    {
      digit = -n % 10;
    }
  else
    {
      digit = n % 10;
    }
  c = '0' + digit;
  print_char(c);
}
