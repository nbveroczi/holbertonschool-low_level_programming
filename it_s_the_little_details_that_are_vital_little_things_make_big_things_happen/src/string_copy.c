#include "string_copy.h"

/*This is a function that copies a string */

char *string_copy(char *dest, const char *src)
{
  int index;

  for (index = 0; src[index] != '\0'; index++)
    {
      dest[index] = src[index];
    }
  for (; index < src[index]; index++)
    {
      dest[index] = '\0';
    }
  return dest;
}

