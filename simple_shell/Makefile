#This is a Makefile that builds an executable
CC      := gcc
CFLAGS  := -Wall -pedantic -Werror -Wextra -I inc
SRC     := main.c concat_strings.c	find_char.c	get_env.c	print_char.c print_string.c str_len.c str_ncmp.c string_copy.c	strings_compare.c
OBJ     := $(SRC:.c=.o)
VPATH = src inc lib
LIB     := ./lib/libshell.a
TARGET  := tntshell
$(TARGET): $(OBJ)
	$(CC) $(OBJ) $(LIB) -o $(TARGET)
clean: ; rm -f $(OBJ) tntshell
re: ; $OBJ
