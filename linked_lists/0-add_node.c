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

  /* This is a function makes a node by allocating memory the sizeof the List */
  node = malloc(sizeof(List));
  if (node == NULL)
  {
    return (1);
  }
  /* make a copy of the string and assign it to the node's string pointer (str) */
  node->str = string_copy(content);
  /* the address of list is assigned to the next node */
  node->next = *list;
  /* The address of the list is given the value of new node becuase it is now the first node */
  *list = node;

  return(0);
}

/*This is a function that copies a string and allocates
a new address */

char *string_copy(char *src)

{
  int index;
  char *dest;
  index = 0;

  dest = malloc(sizeof(char) + 1);

    while (src[index] != '\0')
    {
      if (dest == NULL)
          {
            return (NULL);
          }

      dest[index] = src[index];
      index++;
    }

    dest[index] = 0;

    return (dest);
}
