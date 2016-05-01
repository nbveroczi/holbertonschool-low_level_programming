/* Square Root
This is  an recursive function that returns the natural square root of a number
Returns natural square root else return -1 */
int square_root(int n)
{
  int wholeNum;
  wholeNum = 1;

  if ((wholeNum <= n) && (n == wholeNum * wholeNum))
  {
    return (wholeNum);
  }

  return square_root(wholeNum + 1);
}
