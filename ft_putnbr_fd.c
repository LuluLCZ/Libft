/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:40:46 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/20 09:13:03 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putstr_fd(const char *s, int fd)
{
    int     i;

    i = 0;
    while (s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putstr_fd("-2147483648");
    else
    {
        if (n < 0)
        {
            n = -n;
            ft_putchar_fd('-', fd);
        }
        else if (n > 9)
            ft_putnbr_fd(n / 10);
        ft_putchar_fd((n % 10) + '0', fd);
    }
}