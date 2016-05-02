/* String Concatenate
This is a function that concatenates two strings.*/

char *string_concat(char *dest, const char *src)
{
  int i;
  int j;
  i = 0;

  while(dest[i] != '\0')
  {
    i++;
  }

  j = i;
  i = 0;

  while(src[i] != '\0')
  {
    dest[j] = src[i];
    j++;
    i++;
  }

  return dest;
}
