#include <stdlib.h>
/* This is  a function that returns a pointer to a newly allocated space in
memory, which contains a copy of the string given as a parameter.
*/

int str_len(char *str);

char *string_dup(char *str)
{
    char *newString;
    int i;
    i = 0;
    int len;
    if (str == NULL)
    {
      return NULL;
    }

    len = str_len(str);

    newString = malloc((len + 1) * sizeof(char));
    if (newString == NULL)
    {
      return NULL;     /* No memory */
    }
    while (i < (len + 1))
    {
      newString[i] = str[i];
      i++;
    }

    return(newString);    /* Return the new string */
}

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
