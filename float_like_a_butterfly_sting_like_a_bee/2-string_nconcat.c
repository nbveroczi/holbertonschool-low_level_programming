#include <stdlib.h>
#include "string_nconcat.h"
/* Nconcat
This is a function that concatenates two strings.
Returns a pointer pointing to a newly allocated space in memory which contains
s1 followed by the first n bytes of s2 and Null terminated.  If fails return
NULL */

char *string_nconcat(char *s1, char *s2, int n)
{
  int index, index2;
  char *concat = NULL;
  for (index = 0; s1[index] != '\0'; index++);
  for (index2 = 0; s2[index2] != '\0'; index2++);
  if (index2 < n )
  {
    index = index + index2;
  }
  else
  {
    index = index + n;
  }
  concat = malloc(sizeof(*concat) * index++);
  if (concat == NULL)
  {
    return (NULL);
  }
  for (index = 0; s1[index] != '\0'; index++)
  {
    concat[index] = s1[index];
  }
  for (index2 = 0; s2[index2] != '\0' && index2 < n; index2++, index++)
    {
    concat[index] = s2[index2];
    }
  concat[index] = '\0';
  return (concat);
}
