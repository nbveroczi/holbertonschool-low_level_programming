#include "strings_compare.h"
/*This is a function that compares two strings */

int strings_compare(char *s1, const char *s2)
{
  int index, result = 0;

  for(index = 0; s2[index] != '\0'|| s1[index] != '\0'; index++)
    {
    result = s1[index] - s2[index];
    if(result != 0)
      {
      break;
      }
    }
  return result;
}
