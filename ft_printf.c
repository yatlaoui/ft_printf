/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:13:37 by yasmine           #+#    #+#             */
/*   Updated: 2024/01/22 12:22:48 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

static int	format_check(const char *format, void *arg)
{
	int i;

    i = 0;
    if (format == 'c')
        i = i + ft_putchar((char)arg);
    else if (format == 's')
        i = i + print_string()


    return (i);
}

int	ft_printf(const char *format, ...)
{
    va_list args; // Déclare une variable va_list
    int i;

    i = 0;
    va_start(args, format);  // Initialise la liste des arguments variables
    while (format != '\0')
    {
        
    }
    va_end(args); // Termine l'utilisation de la liste des arguments variables
    return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Pour le c : \n");
// 	char c = 'b';
// 	printf("%c\n", c);

// 	printf("Pour le s : \n");
// 	printf("%s", "hehe\n");

// 	printf("Pour le p : \n");
// 	int *ptr;
// 	printf("%p\n", &ptr);

// 	printf("Pour le d : \n");
// 	printf("%d\n", 42);

// 	printf("Pour le i : \n");
// 	printf("%i\n", 24);

// 	printf("Pour le u : \n");
// 	printf("%u\n", 420);

// 	printf("Pour le x : \n");
// 	printf("%x\n", 15);

// 	printf("Pour le X : \n");
// 	printf("%X\n", 28);

// 	printf("Pour le pourcentage : \n");
// 	printf("%%\n");
// 	return (0);
// }