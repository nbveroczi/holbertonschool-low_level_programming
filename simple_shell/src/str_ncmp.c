#include "str_ncmp.h"
/*This is a function that compares two strings and takes an int as a param */

int str_ncmp(char *s1, const char *s2, int n)
{
  int index;
  int result;
  result = 0;
  index = 0;

  while ((index < n) && (s2[index] != '\0'|| s1[index] != '\0'))
  {
    index++;

    if (s1[index] != s2[index])
    {
      result = 1;
      break;
    }
  }

  return (result);
}
