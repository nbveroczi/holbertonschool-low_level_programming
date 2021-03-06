/* This is a function that executes a function given as 
   a parameter on each element of an array. */

void array_iterator(int *array, int size, void (*action_func)(int))
{
  int index;
  
  if (array)
  for (index = 0; index < size; index++) 
    action_func(array[index]);
}
