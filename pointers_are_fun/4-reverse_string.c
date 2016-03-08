#include "4-reverse_string.h"
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
  /* minus 1 from len so last character doesn't print */
  len -= 1;

    /* print the string subtracting from the length */

    while (s[len] != '\0')
      {
	(s[len--]);

 
