# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 22:13:45 by yasmine           #+#    #+#              #
#    Updated: 2024/01/22 18:24:08 by yaatlaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SO_NAME = libftprintf.so

CC = cc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ft_printf.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_putnbr_unsigned.c\

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