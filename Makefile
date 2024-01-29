# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 22:13:45 by yasmine           #+#    #+#              #
#    Updated: 2024/01/29 01:23:29 by yaatlaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ft_printf.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_putnbr_base.c\
	ft_ptr.c\

OBJ = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)
	rm -f *.out

re:	fclean all

.PHONY: all re fclean clean