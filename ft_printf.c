/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:13:37 by yasmine           #+#    #+#             */
/*   Updated: 2024/01/22 20:39:46 by yaatlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

static int	format_check(const char *format, va_list args)
{
	int i;

    i = 0;
    if (*format == 'c')
        i = i + ft_putchar(va_arg(args, int));
    else if (*format == 's')
        i = i + ft_putstr(va_arg(args, const char*));
    return (i);
}

int	ft_printf(const char *format, ...)
{
    va_list args;
    int i;

    i = 0;
    va_start(args, format);
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            i += format_check(format + 1, args);
        }
        else
            i += ft_putchar(format[i]);
    }
    va_end(args);
    return (i);
}

int	main(void)
{
	char m = 'p';
	printf("%c\n", m);
    ft_printf("%c\n", m);
    
	printf("%s\n", "Hello");
    ft_printf("%s\n", "Hello");
	return (0);
}