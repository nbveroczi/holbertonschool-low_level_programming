/* Square Root
This is  an iterative function that returns the natural square root of a number
Returns natural square root else return -1 */
int square_root(int n)
{
  int wholeNum;
  wholeNum = 1;

  while (wholeNum <= n)
  {
    if (n == wholeNum * wholeNum)
    {
    return (wholeNum);
    }
    else
    {
    wholeNum++;
    }
  }
    return (-1);
}

/* wholeNum * wholeNum = the square root */
