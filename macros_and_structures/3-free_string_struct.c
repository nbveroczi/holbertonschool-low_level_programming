#include <stdlib.h>
#include "str_struct.h"
/* This is a function that frees a struct String */

void free_string_struct(struct String *str)
{
  free(str->str);
  free(str);
}
