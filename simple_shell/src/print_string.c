#include "print_char.h"
/* This is a function that prints a string. */

void print_string(char *str)
  {
    int i;

    for (i = 0; str[i] !='\0'; i++)
      {
        print_char(str[i]);
      }
  }
