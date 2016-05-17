#include <stdlib.h>
#include "str_ncmp.h"
#include "str_len.h"
#include "find_char.h"
/* This is a function that get's a env */

char *get_env(char *name, char **env)
{
  int n, i;

  for (i = 0; env[i] != NULL ; i++)
    {
      if (str_ncmp(env[i], name, str_len(name)) == 0)
        {
          n = find_char(env[i], '=');
          return env[i] + n + 1;
        }
    }
  return "";
}
