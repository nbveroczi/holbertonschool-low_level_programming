#include <stdlib.h>
#include <string.h>
#include "list.h"
char *string_copy(char *src);

/* Add Node
This is a function that allocates a new node and links it to a list
Returns new node linked to list.  1 if it fails, otherwise 0 */

int add_node(List **list, char *content)
{
  List *node;

  /* This is a function that allocates memory the sizeof the List
  that is passed from struct List */
  node = malloc(sizeof(List));
  if (node == NULL)
  {
    return (1);
  }
  /* make a node with the copy of the string passed as a parameter */
  node->str = string_copy(src);
  /* add the address in list to the begining of the linked list */
  node->next = *list;
  /* This *list is given the value of node becuase it is now the first node */
  *list = node;

  return(0);
}

/*This is a function that copies a string and allocates
a new address */

char *string_copy(char *src)

{
  int index;
  char *stringCopy = src;
  index = 0;

    while (src[index] != '\0')
    {
      index++;
    }

src = malloc(sizeof(char) * (index + 1));
if (src == NULL)
    {
      return (0);
    }

  int dest;
  dest = 0;

  while (dest < index)
  {
    dest++;
    src[dest] = stringCopy[dest];
  }

  return (src);
}
