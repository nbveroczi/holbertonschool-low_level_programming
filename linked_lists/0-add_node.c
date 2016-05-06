#include <stdlib.h>
#include <string.h>

typedef struct List {
  char *str;
  struct List *next
} List;

/* Add Node
This is a function that allocates a new node and links it to a list
Returns new node linked to list.  1 if it fails, otherwise 0 */

int add_node(List **list, char *content)
{
  List *node;
  int i;
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

node->content =




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
