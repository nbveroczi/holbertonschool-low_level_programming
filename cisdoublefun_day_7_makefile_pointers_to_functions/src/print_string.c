#include "print_char.h"
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
