# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 22:13:45 by yasmine           #+#    #+#              #
#    Updated: 2023/12/26 00:50:24 by yasmine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
SO_NAME = ft_printf.so

CC = cc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ft_printf.c\

OBJ = $(SOURCES:.c=.o)

