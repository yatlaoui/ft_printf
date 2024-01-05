/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:04:28 by yaatlaou          #+#    #+#             */
/*   Updated: 2024/01/05 15:28:06 by yaatlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
	if (n < 0)
	{
		ft_putchar('-');
		n = n * (-1);
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

// int	main(void)
// {
// 	ft_putnbr(-42);
// 	return (0);
// }