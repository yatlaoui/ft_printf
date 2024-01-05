/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaatlaou <yaatlaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:57:39 by yaatlaou          #+#    #+#             */
/*   Updated: 2024/01/05 14:42:36 by yaatlaou         ###   ########.fr       */
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