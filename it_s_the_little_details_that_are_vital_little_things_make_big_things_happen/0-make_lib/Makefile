#This is a Makefile that builds my libholbertonschool.a library                                                               

INCLUDE_DIRECTORIES = ./inc
CC= gcc
CFLAGS= -Wall -pedantic -Werror -Wextra -I$(INCLUDE_DIRECTORIES)

SRCS := absolute.c concat_strings.c countNumDigits.c factorial.c is_prime_number.c is_prime_number_recursive.c lowercase.c nconcat_strings.c positive_or_not.c power.c powerOfTen.c print_char.c print_number.c print_string.c reverse_array.c reverse_string.c square_root.c square_root_recursive.c string_copy.c string_ncopy.c strings_compare.c str_len.c swap_int.c uppercase.c

OBJS := $(SRCS:.c=.o)

.PHONY: all

all: $(OBJS) ; ar -rc libholbertonschool.a $(OBJS)

absolute.o: absolute.h
concat_strings.o: concat_strings.h 
countNumDigits.o: countNumDigits.h 
factorial.o: factorial.h
is_prime_number.o: is_prime_number.h is_prime_number_recursive.h
is_prime_number_recursive.o: is_prime_number_recursive.h 
lowercase.o: lowercase.h 
nconcat_strings.o: nconcat_strings.h print_char.h str_len.h
positive_or_not.o: positive_or_not.h print_char.h
power.o: power.h 
powerOfTen.o: powerOfTen.h 
print_char.o: print_char.h 
print_number.o: print_number.h print_char.h countNumDigits.h powerOfTen.h
print_string.o: print_string.h print_char.h
reverse_array.o: reverse_array.h print_char.h
reverse_string.o: reverse_string.h 
square_root.o: square_root.h power.h square_root_recursive.h
square_root_recursive.o: square_root_recursive.h power.h 
str_len.o: str_len.h
string_copy.o: string_copy.h 
string_ncopy.o: string_ncopy.h 
strings_compare.o: strings_compare.h
swap_int.o: swap_int.h 
uppercase.o: uppercase.h

vpath %.h $(INCLUDE_DIRECTORIES)

vpath %.c ./src

clean: ; rm libholbertonschool.a $(OBJS)

re: clean all
