/* Reverse String
This is a function that reverses a string
*/
int str_len(char *s);
char *rev_string(char *str)
{
  int i;
  char temp;
  int len;
  len = str_len(str) -1;
  i = 0;
  
  while (i < len)
  {
    temp = str[i];
    str[i] = str[len];
    str[len] = temp;
    i++;
    len--;
  }

  return (str);
}

  
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
