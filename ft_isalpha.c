/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 13:56:14 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 02:12:53 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    printf("%d\n", ft_isalpha(av[1][0]));
    printf("%d", isalpha(*av[1]));
}