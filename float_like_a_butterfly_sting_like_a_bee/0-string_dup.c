#include <stdlib.h>
#include "string_dup.h"
/* String Dup
This is a function that returns a pointer to a newly allocated space in memory,
which contains a copy of the string given as a parameter.
Returns a pointer and if fails NULL */

char *string_dup(char *str)
{
  char *stringCopy = NULL;
  int index;

  stringCopy = malloc(sizeof(*str));

  if(str == NULL)
  {
    return NULL;
  }
  for(index = 0; str[index] != '\0'; index++)
  {
    stringCopy[index] = str[index];
  }

return stringCopy;
}
