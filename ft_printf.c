/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:13:37 by yasmine           #+#    #+#             */
/*   Updated: 2024/01/28 16:41:56 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_check(const char *format, va_list args)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		i += ft_putstr(va_arg(args, const char *));
	else if (*format == 'p')
		i += ft_ptr(va_arg(args, uintptr_t *));
	else if (*format == 'd' || *format == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		i += ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
	else if (*format == 'x')
		i += ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789abcdef");
	else if (*format == 'X')
		i += ft_putnbr_base(va_arg(args, unsigned int),
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
// #include <stdio.h>
// int main(void)
// {
// 	ft_printf("*-*-**-*-* S *-*-**-*-*\n");
// 	char *s = NULL;
// 	printf("%d\n", printf("Vraie fonction : %s\n", s));
//     printf("%d\n", ft_printf("Ma fonction : %s\n", s));
// 	ft_printf("*-*-**-*-* P *-*-**-*-*\n");
// 	uintptr_t value = 3; 
//     uintptr_t *ptrr = &value;
//     printf("Vraie fonction : %p\n", ptrr);
// 	ft_printf("Ma fonction : %p\n", ptrr);
// 	printf("*-*-**-*-* X *-*-**-*-*\n");
// 	printf("Vraie fonction : %X\n", 200);
// 	ft_printf("Ma fonction : %X\n", 200);
// 	return (0);
// }
