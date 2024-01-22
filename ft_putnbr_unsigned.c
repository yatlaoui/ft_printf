/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:48:56 by yaatlaou          #+#    #+#             */
/*   Updated: 2024/01/22 17:49:17 by yaatlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	if (n > 9)
		ft_putnbr_unsigned(n / 10);
	ft_putchar(n % 10 + '0');
}
// #include <stdio.h>
// int main(void)
// {
// 	ft_putnbr_unsigned(966);
// 	printf("\n");
// 	printf("%u", 966);
// 	return (0);
// }