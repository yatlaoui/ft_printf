# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 22:13:45 by yasmine           #+#    #+#              #
#    Updated: 2024/01/16 16:33:08 by yaatlaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SO_NAME = libftprintf.so

CC = cc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ft_printf.c\
	print_char.c\
	print_string.c\
	print_nbr.c\

OBJ = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME) $(SO_NAME)

clean:
	rm -f $(OBJ)
	rm -f *.out

re:	fclean all

.PHONY: all re fclean clean