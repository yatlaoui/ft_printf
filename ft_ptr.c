/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:16:12 by yaatlaou          #+#    #+#             */
/*   Updated: 2024/01/25 02:21:40 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long int *ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		i += write(1, "(nil)", 5);
	else
	{
		i += write(1, "0x", 2);
		i += ft_putnbr_base((uintptr_t)ptr, "0123456789abcdef");
	}
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
//     unsigned long int value = 3; 
//     unsigned long int *ptrr = &value;
//     printf("%d\n", ft_ptr(ptrr));
//     printf("%p\n", ptrr);
//     return (0);
// }
