#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include "libshell.h"
#include <string.h>
#include "my_functions.h"
/* This is a function that creates a command line interpreter (shell) */
int main(__attribute__((unused)) int ac,
         __attribute__((unused)) char **av, char **env)
{
  pid_t pid;
  char **exec_argv, *read_str, *tmp, **paths, *path_split, *str;
  int status, i, j, path_len, cmd_found, str_len;
  str_len = 0;

  while (1) {
    print_char('$');
    read_str = read_line(0);
    if (read_str == NULL)
      return 1;
    exec_argv = string_split(read_str, ' ');
    if (exec_argv == NULL) {
      free(read_str);
      return 1;
    }
    if (strings_compare("exit", exec_argv[0]) == 0)
      return (0);
    else if(strings_compare("env", exec_argv[0]) == 0) {
      for (i = 0; env[i]!= NULL; i++) {
        if(i != 0)
          print_char('\n');
        print_string(env[i]);
      print_char('\n');
      }
    }
    else {
      if ((pid = fork()) == -1) {
        perror("fork");
        return (1);
      }
      if(pid == 0)  {
        path_split = get_env("PATH", env);
        paths = string_split(path_split, ':');
        if (paths == NULL)
        return 1;
        cmd_found = -1;
        for (j = 0; paths[j] != NULL; j++) {
          path_len = 0;
          while (paths[j][path_len]!= '\0')
            path_len++;
            str = exec_argv[0];
            while(str[str_len] != '\0')
              str_len++;
            tmp = (char *) malloc(path_len);
            if(tmp == NULL)
              return 1;
            string_copy(tmp,paths[j]);
            concat_strings(tmp, exec_argv[0]);
            concat_strings(tmp,"/");
            exec_argv[0] = tmp;
            if (access(tmp, F_OK) != -1) {
              execve(tmp, exec_argv, env);
              free(tmp);
            }
         }
      }
      else {
        wait(&status);
        break;
        print_string("Child process terminated\n");
      }
    }
    if (cmd_found == -1)
      print_string("command not found\n");

  }
  free(tmp);
  free(read_str);
  free(exec_argv);
  return 0;
}
