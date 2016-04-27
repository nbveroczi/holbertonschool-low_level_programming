/* String Length
This is a function that returns the length of a string
*/

int str_len(char *s)
{

  int len;
  len = 0;

  while (s[len] != '\0')
    {
      len++;
    }
  return (len);

}
