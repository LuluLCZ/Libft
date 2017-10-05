/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:30:35 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 02:25:30 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

int     ft_toupper(int c)
{
    if (c >= 141 && c <= 172)
        return (c - 32);
    else
        return (c);
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    printf("%d", ft_toupper(av[1][0]));
    return (0);
}