/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:57:39 by yaatlaou          #+#    #+#             */
/*   Updated: 2024/01/07 14:51:31 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    putstr(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        ft_putchar(str[i++]);
}
// #include <stdio.h>
// int main(void)
// {
//     putstr("hello");
//     return(0);
// }