#include <stdlib.h>
#include <string.h>

/* This function finds the length of a string */
int str_len(char *str)
{
  int len;
  len = 0;
  if (str == NULL)
  {
    return (0);
  }
  while (str[len] != '\0')
  {
    len++;
  }

  return (len);
}

typedef struct List {
  char *str;
  struct List *next;
} List;

/* Add Node
This is a function that allocates a new node and links it to a list
Returns new node linked to list.  1 if it fails, otherwise 0 */

int add_node(List **list, char *content)
{
  List *node;
  int i;
  struct List *next;
  char *stringCopy;
  i = 0;

  /* This is a function that allocates memory the sizeof the List
  that is passed from struct List */
  node = malloc(sizeof(List));
  if (node == NULL)
  {
    return (0);
  }
  else
  {
    return(1);
  }

list->length = str_len(str);
node->content = string_copy(str);
node->next = *list;

/* This is a function that allocates memory the sizeof the copy (list->length)
of the string that was passed from struct List */
stringCopy = malloc(sizeof(list->length));
if (stringCopy == NULL)
  return (NULL);

while (str[i] != '\0')
{
  stringCopy[i] = str[i];
  i++;
}
list->str = stringCopy;

return list;
}


/*This is a function that copies a string */

char *string_copy(char *dest, const char *src)
{
  int index;

  for (index = 0; src[index] != '\0'; index++)
    {
      dest[index] = src[index];
    }
  for (; index < src[index]; index++)
    {
      dest[index] = '\0';
    }
  return dest;
}
