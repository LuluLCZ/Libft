/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:40:46 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/10 01:23:37 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
    else
    {
        if (n < 0)
        {
            n = -n;
            ft_putchar_fd('-', fd);
        }
        else if (n > 9)
            ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd((n % 10) + '0', fd);
    }
}