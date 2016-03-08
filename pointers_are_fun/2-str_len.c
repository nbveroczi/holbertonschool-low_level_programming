#include "2-str_len.h"
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
