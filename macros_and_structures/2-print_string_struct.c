#include <stdlib.h>
#include <string.h>
#include "str_struct.h"
#include <unistd.h>
#include "countNumDigits.h"
#include "powerOfTen.h"
#include "print_number.h"
#include "print_char.h"
/* Secure the length of a string */

int str_len(char *str)
{
  int len;
  len = 0;
  if (str == NULL)
  {
    return (0);
  }
  while (str[len] != '\0')
  {
    len++;
  }

  return (len);
}

/* This is a function that prints a char */

int print_char(char c)
{
  return (write(1, &c, 1));
}

/* This is a function that prints a string. */

void print_string(char *str)
{

  int i;
  i = 0;

  while (str[i] != '\0')
    {
      print_char(str[i++]);
    }
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

  int length;
  length = str_len(str);

  print_string(str->str);
  print_char(',');
  print_char(' ');
  print_number(length);
  print_char('\n');

}
