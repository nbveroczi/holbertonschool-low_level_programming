#include "string_ncopy.h"
/* This is a function that copies a string */

char *string_ncopy(char *dest, const char *src, int n)
{
  int index;

  for (index = 0; index < n && src[index] != '\0'; index++) 
    {
      dest[index] = src[index];
    }
  
  for (; index < n; index++) 
    {
      dest[index] = '\0';
    }
return dest;
}
