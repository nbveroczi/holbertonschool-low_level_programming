/* This is a function that searches for an integer 
   stored in an array. Advanced_search takes a pointer                                                     to the function to be used to compare values. */

int advanced_search(int *array, int size, int (*check_func)(int))
{
  int index;
  int result;
  
  if (array)
    for (index = 0; index < size; index++)
      if (check_func(array[index])) == (check_func(array[index]))
	{
	  result = 1;
        }
      else
	{
	  result = 0;
        }

  return;
}
