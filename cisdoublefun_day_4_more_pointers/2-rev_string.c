/* Reverse string
This is a function that reverses a string.
returns a poiner to the first letter of the reversed string.
*/
int str_len(char *s);
char *rev_string(char *str)
{
  int i;
  int length;
  char temp;
  i = 0;
  length = str_len(str) - 1;

  while (i < length)
  {
    temp = str[i];
    str[i] = str_len[str];
    str_len[str] = temp;
    i++;
    length--;
  }

  return (str);
}

int str_len(char *s)
{
  int length;
  length = 0;

  while (s[length != '\0'])
  {
    length++;
  }

  return (length);
}
