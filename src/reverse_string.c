#include "reverse_string.h"
/* This is a function that reverses a string. */

void reverse_string(char *s)
{
  /* find the length of the string */
  int len;
  len = 0;

  while (s[len] != '\0')
    {
      (s[len++]);
    }
  return;
  char str;
  int store;
  int i;

  for (i = 0; i < (len/2); i++)
    {
      store = str[i];
      str[i] = str[((len-1) - i)];
      str[((len-1) - i)] = store;
    }
}


 
