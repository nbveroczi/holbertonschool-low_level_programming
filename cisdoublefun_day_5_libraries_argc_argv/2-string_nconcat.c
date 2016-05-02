/*  This a function that concatenates two strings */

char *string_nconcat(char *dest, char *src, int n)
{
  int i;
  int j;
  i = 0;

  while (dest[i] != '\0')
  {
    i++;
  }

  j = i;
  i = 0;

  while ((src[i] != '\0') && (i < n))
  {
    dest[j] = src[i];
    i++;
    j++;
  }
  dest[j] = '\0';

  return dest;
}
