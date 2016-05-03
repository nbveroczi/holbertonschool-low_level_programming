#include <unistd.h>
/* This function prints a number in decimal format */
int print_char(char c);
int countNumDigits(int n);
int powerOfTen(int exponent);
void print_number(int n)
{
    int digit, numDigits, divisor, remainder;
    remainder = n;
    if (n < 0) {
        remainder = -n;
        print_char('-');
    }
    else if (n == 0) {
        print_char('0');
        return;
    }

    numDigits = countNumDigits(remainder);
    divisor = powerOfTen(numDigits - 1);

    for (;numDigits > 0; numDigits--) {
        digit = remainder / divisor;
        print_char('0' + digit);
        remainder -= (digit * divisor);
        divisor = divisor / 10;
    }
}

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

int print_char(char c)
{
  return (write(1, &c, 1));
}
