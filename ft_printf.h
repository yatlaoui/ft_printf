/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:13:33 by yasmine           #+#    #+#             */
/*   Updated: 2024/01/16 16:33:34 by yaatlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>

int		ft_printf(const char *format, ...);
void    ft_putchar(char c);
void    putstr(const char *str);
void	ft_putnbr(int n);

#endif