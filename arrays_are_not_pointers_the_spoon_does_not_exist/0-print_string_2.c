#include "0-print_string_2.h"
/* This is a function that returns the length of a string. */

int str_len(char *str)
{
  int len;
  len = 0;

  while (str[len] != '\0')
    {
      len++;
    }
  return len;
}
/* This is a function that prints every other character starting
   with the first one */
void print_string_2(char *str)
{
  int strLength;
  strLength = str_len(str);
  int i;

  for (i = 0; str[i] !='\0'; i++)
    {
      if (i % 2 == 0)
	{
	  print_char(str[i]);
	}
    }
}
