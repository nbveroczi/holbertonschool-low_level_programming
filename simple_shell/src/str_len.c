#include <stdlib.h>
/* This function finds the length of a string */

int str_len(char *str)
{
  int len;
  len = 0;
  if (str == NULL)
    return (0);
  while (str[len] != '\0')
    len++;
  return (len);
}
