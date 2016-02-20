/* This function converts a letter to upper case,
   if it is possible.
*/
char uppercase(char c)
{
  char result;

  if ((c >= 'a') && (c <= 'z'))
    {
      result = c - ('a' - 'A');
    } 
  else 
    {
      result = c;
    }
  return result;
}
