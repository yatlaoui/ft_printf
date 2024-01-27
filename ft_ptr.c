/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:16:12 by yaatlaou          #+#    #+#             */
/*   Updated: 2024/01/27 16:28:27 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(uintptr_t *ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		i += write(1, "(nil)", 5);
	else
	{
		i += write(1, "0x", 2);
		i += ft_putnbr_base((uintptr_t)ptr, "0123456789abcdef");
	}
	return (i);
}
