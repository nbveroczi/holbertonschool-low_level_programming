/* Copy a string
This is a function that copies a string.
*/
#include <string.h>
char *string_copy(char *dest, const char *src)
{
  int i;
  i = 0;

  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }

  dest[i] = '\0';
  return dest;

}
