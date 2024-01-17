/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:13:37 by yasmine           #+#    #+#             */
/*   Updated: 2024/01/17 20:37:29 by yaatlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_check(int result)
{
	int result;

    result = 0;
    if (result == 'c')
        result = result + print_char(format);
    if (result == 's')
}

int	ft_printf(const char *format, ...);


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