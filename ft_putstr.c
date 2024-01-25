/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:43:46 by yaatlaou          #+#    #+#             */
/*   Updated: 2024/01/25 03:30:29 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)"); // wtf????
		return (6); // why ??
	}
	while (str[i] != '\0')
		ft_putchar(str[i++]);
	return (i);
}
