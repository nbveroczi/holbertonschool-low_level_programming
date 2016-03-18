#include "4-strings_compare.h"

/*This is a function that compares two strings */
int strings_compare(char *s1, const char *s2)
{ 
  int index, s3 = 0;

  for(index = 0; s2[index] != '\0'|| s1[index] != '\0'; index++)
    {
    s3 = s1[index] - s2[index];
    if(s3 != 0)
      {
      break;
      }
    }
  return s3;
}
