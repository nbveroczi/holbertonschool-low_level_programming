/* This is  a function that returns a pointer to a newly allocated space in
memory, which contains a copy of the string given as a parameter.
*/
#include <stdio.h>
#include <stdlib.h>

int str_len(char *str);
char *string_dup(char *str)
{
    char *d;
    int i;
    i = 0;
    int len;
    len = 0;
    len = str_len(str);

    d = malloc(len * sizeof(char));
    if (d == NULL)
    {
      return NULL;     /* No memory */
    }
    while (len > 0)
    {
    d[i] = str[i];
    i++;
    len--;
    }

    d[i] = 0;
    return(d);    /* Return the new string */
}

int str_len(char *str)
{
  int len;
  len = 0;
  while (str[len] != '\0')
  {
    len++;
  }

  return (len);
}
