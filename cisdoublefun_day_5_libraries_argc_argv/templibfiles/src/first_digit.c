/* This is a function that returns the first
   digit of a number.
*/

int first_digit(int n)
{
  unsigned int remainder;

 if (n < 0)
    {
      remainder = -n;
    }
 else
   {
     remainder = n;
   }

  while (remainder > 9)
    {
      remainder = remainder / 10;
    }
  return(remainder);
}
