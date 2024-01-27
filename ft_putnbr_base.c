/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:44:40 by yaatlaou          #+#    #+#             */
/*   Updated: 2024/01/27 15:29:52 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static uintptr_t	ft_strlen(const char *s)
{
	uintptr_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbr_base(uintptr_t n, char *base)
{
	int			i;
	uintptr_t	b;

	i = 0;
	b = ft_strlen(base);
	if (n >= b)
		i += ft_putnbr_base((n / b), base);
	i += ft_putchar(base[n % b]);
	return (i);
}
