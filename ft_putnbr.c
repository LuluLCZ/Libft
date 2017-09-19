/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:07:51 by llacaze           #+#    #+#             */
/*   Updated: 2017/09/19 16:19:43 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
        ft_putstr("-2147483648");
    else
    {
        if (nb < 0)
        {
            nb = -nb;
            ft_putchar('-');
        }
        if (nb > 9)
        {
            ft_putnbr(nb/10);
        }
        ft_putchar((nb % 10) + '0');
    }
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    ft_putnbr(atoi(av[1]));
    return (0);
}