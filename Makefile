#
## EPITECH PROJECT, 2021
## 
## File description:
## Makefile
#

SRC_MAIN	=	src/main.c

SRC_TEST	=	src/palindrome.c		\
				src/my_lib.c			\
				src/n_flag.c			\
				src/int_to_str.c		\
				src/reverse_str.c		\
				src/str_is_palindrome.c	\
				src/my_putchar.c		\
				src/is_nbr.c			\
				src/get_str_base.c		\
				src/convert_nbr_base.c	\
				src/str_comp.c			\
				src/p_flag.c			\
				src/any_base_to_deci.c	\
				src/check_arg.c			\

SRC			=	$(SRC_TEST) $(SRC_MAIN)

TESTS		=

CFLAGS		=	-Wall -Wextra -g

CPPFLAGS	=	-I./include/

OBJ			=	$(SRC:.c=.o)

CC			=	gcc

RM			=	rm -f

NAME		=	palindrome

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

debug:	clean $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

tests_run:
	$(CC) -o unit_tests $(SRC_TEST) $(TESTS) $(CFLAGS) $(CPPFLAGS) -lcriterion --coverage
	./unit_tests --verbose
	$(RM) *.gc*

clean:
	$(RM) $(OBJ)
	$(RM) *.gc*
	$(RM) unit_tests

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re tests_run
