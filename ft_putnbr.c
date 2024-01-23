/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:48:13 by yaatlaou          #+#    #+#             */
/*   Updated: 2024/01/23 17:16:43 by yaatlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		i += write(1, "-2147483648", 11);
	if (n >= 0 && n < 10)
		i += ft_putchar(n + '0');
	if (n < 0)
	{
		i += ft_putchar('-');
		i += ft_putnbr(n * (-1));
	}
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	return (i);
}

// int	main(void)
// {
// 	ft_putnbr(-214744);
// 	return (0);
// }