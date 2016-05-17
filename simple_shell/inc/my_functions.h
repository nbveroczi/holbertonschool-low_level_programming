#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include "libshell.h"
#include <string.h>
int strings_compare(char *s1, const char *s2);
int print_char(char c);
void print_string(char *s);
int str_ncmp(char *s1, char *s2, int n);
int str_len(char *s);
int find_char(char *s, char c);
char *get_env(char *name, char **env);
char concat_strings(char *dest, const char *src);
char *string_copy(char *dest, const char *src);
