/* This is a function that convers a letter to
   lower case, if possible.
*/

char lowercase(char c)
{
  char result;

  if ((c >= 'A') && (c <= 'Z'))
    {
      result = c - ('A' - 'a');
    }
  else
    {
      result = c;
    }
  return result;
}
