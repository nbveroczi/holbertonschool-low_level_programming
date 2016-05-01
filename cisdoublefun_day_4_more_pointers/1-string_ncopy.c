/* Copy a string
This is a function that copies a string.
*/
#include <string.h>
char *string_ncopy(char *dest, const char *src, int n)
{
  int i;
  i = 0;

  while ((i < n) && (src[i] != '\0'))
  {
    dest[i] = src[i];
    i++;
  }
  while (i < n)
  {
    dest[i] = '\0';
    i++;
  }

  return dest;
}
