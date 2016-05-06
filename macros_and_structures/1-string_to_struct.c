#include <stdlib.h>
#include <string.h>
#include "str_struct.h"

/* This function finds the length of a string */
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
Returns the address of this structure */
struct String *string_to_struct(char *str)
{
  int i;
  char *stringCopy;
  struct String *string;
  i = 0;
  /* This is a function that allocates memory the sizeof the string
  that is passed from struct String */
  string = malloc(sizeof(struct String));
  if (string == NULL)
    return (NULL);

  string->length = str_len(str);
  /* This is a function that allocates memory the sizeof the copy (string->length)
  of the string that was passed from struct String */
  stringCopy = malloc(sizeof(string->length));
  if (stringCopy == NULL)
    return (NULL);

  while (str[i] != '\0')
  {
    stringCopy[i] = str[i];
    i++;
  }
  string->str = stringCopy;

  return string;
}
