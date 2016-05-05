#include <stdlib.h>
#include <string.h>
#include "str_struct.h"
#include <unistd.h>

/* This is a function that prints a character */

int print_char(char c)
{
  return (write(1, &c, 1));
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

/* Print String Struct
This is a function that prints the content of a struct String
Returns struct String
*/

void print_string_struct(struct String *str)
{

  int i;
  i = 0;

  while (str->str[i] != '\0')
  {
      print_char(str->str[i]);
      i++;
  }

  print_char(',');
  print_char(' ');
  print_number(str->length);
  print_char('\n');
}
