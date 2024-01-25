/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:13:37 by yasmine           #+#    #+#             */
/*   Updated: 2024/01/25 03:29:58 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

static int	format_check(const char *format, va_list args)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		i += ft_putstr(va_arg(args, const char *));
	else if (*format == 'p')
		i += ft_ptr(va_arg(args, unsigned long int *));
	else if (*format == 'd' || *format == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		i += ft_putnbr_base(va_arg(args, unsigned long int), "0123456789");
	else if (*format == 'x')
		i += ft_putnbr_base(va_arg(args, unsigned long int),
				"0123456789abcdef");
	else if (*format == 'X')
		i += ft_putnbr_base(va_arg(args, unsigned long int),
				"0123456789ABCDEF");
	else if (*format == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			i += format_check(format, args);
		}
		else
			i += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (i);
}

// int main(void)
// {
//     // char *ptr = 9;
//     // printf("Vraie fonction : %p\n", (void *)&ptr);
//     // ft_printf("Ma fonction : %p\n", (void *)ptr);
// 	printf("Vraie fonction : %s\n", "");
//     ft_printf("Ma fonction : %s\n", "");
// 	return (0);
// }