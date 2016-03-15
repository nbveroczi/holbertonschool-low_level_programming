#include "1-nconcat_strings.h" 
/* This is a function that concatenates two strings. */

char *nconcat_strings(char *dest, const char *src, int n)
 
     char *d = dest;
     const char *s = src;
     
{
  if (n != 0) {
    while (*d != 0)
      d++;
    do {
      if ((*d = *s++) == 0)
	break;
      d++;
    } while (--n != 0);
    *d = 0;
  }
  return (dest);
}
