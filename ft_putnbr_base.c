/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:44:40 by yaatlaou          #+#    #+#             */
/*   Updated: 2024/01/23 19:03:30 by yaatlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbr_base(unsigned long int n, char *base)
{
	int	i;
	int	b;

	i = 0;
	b = ft_strlen(base);
	if (n / b != 0)
		i += ft_putnbr_base((n / b), base);
	i += ft_putchar(base[n % b]);
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	ft_putnbr_hexa(0, "0123456789abcdef");
// 	printf("%x", ft_putnbr_hexa(0, "0123456789abcdef"));
// 	return (0);
// }