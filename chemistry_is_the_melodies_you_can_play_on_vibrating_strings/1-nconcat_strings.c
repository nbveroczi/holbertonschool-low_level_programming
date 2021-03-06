#include "1-nconcat_strings.h" 
/* This is a function that concatenates two strings. */

char *nconcat_strings(char *dest, const char *src, int n)
{
  int i, j;
 
  for (i = 0; dest[i] != '\0'; i++);
 
  for (j = 0 ; j < n && src[j] != '\0' ; j++, i++) 
    {
      dest[i] = src[j];
    }
  dest[i] = '\0';
  return dest;
}
