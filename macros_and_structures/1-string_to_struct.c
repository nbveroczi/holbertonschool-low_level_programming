#include <stdlib.h>
#include <string.h>
#include "str_struct.h"
/* Secure the length of a string */

int str_len(char *str)
{
  int len;
  len = 0;
  if (str == NULL)
  {
    return (0);
  }
  while (str[len] != '\0')
  {
    len++;
  }

  return (len);
}

/* String struct
This is a function that stores a string and its length in a structure
Returns the address of this structure
*/

struct String *string_to_struct(char *str)
{
  int length;
  struct String *string;
  length = str_len(str);

  string = malloc(sizeof(struct String));
  if (string == NULL)
    return (NULL);
  string->str = str;
  string->length = length;

  return string;
}
