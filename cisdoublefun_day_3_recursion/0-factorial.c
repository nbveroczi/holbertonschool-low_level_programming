/* Factorial
This is an iterative function that returns the factorial of a given number
Returns -1 (indicating error) if n is < 0, returns factor of Number, returns
-1 if result can not be stored in an int
*/

int factorial(int n)
{
  int result;
  int i;
  result = 1;
  i = 1;

  if (n < 0)
  {
    return (-1);
  }
  while (i <= n)
  {
      result = result * i;
      i++;
  }

return (result);
}
