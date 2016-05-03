#This is a Makefile that builds my libholbertonschool.a library
INCLUDE_DIRECTORIES = ./inc

CC= gcc

CFLAGS= -Wall -pedantic -Werror -Wextra -I$(INCLUDE_DIRECTORIES)

SRCS= print_char.c positive_or_not.c print_number.c	absolute.c	 cap_string.c uppercase.c uppercase_string.c lowercase.c first_digit.c swap_int.c str_len.c print_string.c reverse_string.c string_to_integer.c print_array.c strings_compare.c power.c	square_root.c

OBJS= $(SRCS:.c=.o)

VPATH = src inc

all: $(OBJS) ; ar -rc libholbertonschool.a $(OBJS)

clean: ; rm -f $(OBJS)

re: clean all
