# E89 Pedagogical & Technical Lab
# project:     template C repo
# created on:  2022-09-14 - 16:36 +0200
# 1st author:  Élise C. Philippe - eriizu
# description: Building the project

NAME	=	libstu.a

NAME_TEST = 	test.out

SRCS	=	src/atoi.c		\
		src/is_alpha.c		\
		src/is_number.c		\
		src/print_base10.c	\
		src/puts.c		\
		src/strcat.c		\
		src/strchr.c		\
		src/strcmp.c		\
		src/strcpy.c		\
		src/strdup.c		\
		src/strlen.c		\
		src/strncpy.c		\
		src/strndup.c		\
		src/swap_int.c		\
		src/nb_len.c		\
		src/get_digit.c

SRCS_TEST =	test/test_strlen.c		\
		test/test_atoi.c		\
		test/test_is_alpha.c		\
		test/test_is_number.c		\
		test/test_print_base10.c	\
		test/test_puts.c		\
		test/test_strcat.c		\
		test/test_strchr.c		\
		test/test_strcmp.c		\
		test/test_strcpy.c		\
		test/test_strdup.c		\
		test/test_strncpy.c		\
		test/test_strndup.c		\
		test/test_swap_int.c

OBJS	=	$(SRCS:.c=.o)

OBJS_TEST =	$(SRCS_TEST:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME_TEST)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(NAME_TEST): $(OBJS) $(OBJS_TEST)
	$(CC) -o $(NAME_TEST) $(OBJS) $(OBJS_TEST) -lcriterion

clean:
	@$(RM) $(OBJS) $(OBJS_TEST)

fclean: clean
	@$(RM) $(NAME) $(NAME_TEST)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
