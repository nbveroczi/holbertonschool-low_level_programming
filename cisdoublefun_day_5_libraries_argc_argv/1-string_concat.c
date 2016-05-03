/* String Concatenate
This is a function that concatenates two strings.*/

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
