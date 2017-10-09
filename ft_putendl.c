/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:05:34 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/09 17:07:36 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(const char *s)
{
    int     i;

    i = 0;
    while (s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
}

void    ft_putendl(const char *s)
{
    ft_putstr(s);
    ft_putchar('\n');
}