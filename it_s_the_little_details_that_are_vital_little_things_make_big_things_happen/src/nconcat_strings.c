#include "print_char.h"
#include "str_len.h"
/* This is a function that concatenates two strings */

char *nconcat_strings(char *dest, const char *src, int n)
{
  int destLength = str_len(dest);
  int i;

  for (i = 0; i < n && src[i] != '\0'; i++)
    {
      dest[destLength + i] = src[i];
    }
  dest[destLength + i] = '\0';

  return dest;
}
