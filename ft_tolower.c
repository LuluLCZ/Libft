/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 14:09:43 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 02:25:14 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    else
        return (c);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        printf("%d\n", ft_tolower(*av[1]));
        //printf("%d", tolower(*av[1]));
}