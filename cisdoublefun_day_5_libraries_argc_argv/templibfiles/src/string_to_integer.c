#include<stdio.h>
#include <limits.h>
int string_to_integer(char *s)
{
  int i;
  int sign;
  int new_digit;
  long int number;
  i = 0;
  sign = 1;
  number = 0;

  while ((s[i] != '\0') && (s[i] < '0' || s[i] > '9'))
  {
    if (s[i] == '-')
    {
      sign *= -1;
    }
    i++;
  }

  while ((s[i] != '\0') && (s[i] >= '0' && s[i] <= '9'))
  {
    number *=10;
    new_digit = s[i] - '0';
    number += new_digit;
    if ((sign == 1 && number  > INT_MAX) || (sign == -1 && (-1 * number < INT_MIN)))
    {
      return(0);
    }

    i++;
  }

  return (sign * number);
}
