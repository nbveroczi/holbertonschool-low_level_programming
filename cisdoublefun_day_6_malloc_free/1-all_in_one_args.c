#include <stdio.h>
#include <stdlib.h>
int str_len(char *str);
char *string_concat(char *dest, const char *src);
/* This is a function that concatenates all command line arguments
Returns concatenated command line arguments */
char *all_in_one_args(int ac, char **av)

{
  int index;
  int combinedStringIndex;
  int result;
  char *newString;
  char newLine[2] = {'\n', '\0'};
  combinedStringIndex = 0;
  index = 0;
  result = 0;

  while (index < ac)
  {
    result += str_len(av[index]) + 1;
    index++;
  }

  newString = malloc(result * sizeof(char));
  /* "don't trust malloc" -JB */
  if (newString == NULL)
  {
    return NULL;     /* No memory */
  }

  while (combinedStringIndex < ac)
  {
    string_concat(newString, av[combinedStringIndex]);
    string_concat(newString, newLine);
    combinedStringIndex++;
  }

  newString[result] = '\0';

  return (newString);
}

char *string_concat(char *dest, const char *src)
{
  int indexIntoSrc;
  int indexIntoDest;

  indexIntoDest = 0;
  while(dest[indexIntoDest] != '\0')
  {
    indexIntoDest++;
  }

  indexIntoSrc = 0;
  while(src[indexIntoSrc] != '\0')
  {
    dest[indexIntoDest] = src[indexIntoSrc];
    indexIntoSrc++;
    indexIntoDest++;
  }
  dest[indexIntoDest] = '\0';

  return dest;
}

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
