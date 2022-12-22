# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwidmer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 09:51:03 by lwidmer           #+#    #+#              #
#    Updated: 2022/12/16 10:44:22 by lwidmer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Fritinette
#Makefile to test 

FILENAMES = test

#SRCS_DIR = ./sources_ft_printf/
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILENAMES)))

#OBJS_DIR = ./sources_ft_printf/
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILENAMES)))
CFLAGS = -Werror -Wall -Wextra

INCLUDES_DIR = -I./../includes_ft_printf/

LIBRARY = libftprintf.a
LIB_DIR = ../
LIB_INCLUDE = $(addprefix $(LIB_DIR), $(LIBRARY))
FILE1 := test_outputs/

test: ${OBJS}
	cc ${CFLAGS} ${OBJS} -L. $(LIB_INCLUDE)
	for arg in INT_TEST_ U_INT_TEST_ STR_TEST_ CHAR_TEST_ HEX_TEST_LOW_ HEX_TEST_UPPER_ PRINT_TEST_ POINTER_TEST_ MIXED_TEST_; do \
		for number in 0 1 2 3 4 5 6 7 8 9; do \
			for fun in _FT _ORG; do \
				./a.out $$arg $$number $$fun > test_outputs/$$arg$$number$$fun.output; \
			done \
		done \
	done

.c.o: ${SRCS}
	cc ${CFLAGS} -c -o $@ $< $(INCLUDES_DIR) 

all: ${NAME} clean

clean:
	rm -rf ${OBJS}
	rm /test_outputs/*

fclean: clean
	rm -rf ${NAME}

re: fclean all

git:
	git add .
	git commit -m "$m"
	git push origin master

.PHONY: all clean fclean re
