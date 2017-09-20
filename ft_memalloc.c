/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 08:12:21 by llacaze           #+#    #+#             */
/*   Updated: 2017/09/20 08:19:05 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void    *ft_memalloc(size_t size)
{
    size_t  i;
    char    *str;

    i = 0;
    if (!(str = (char *)malloc(size)))
        return (NULL);
    while (i < size)
    {
        str[i] = 0;
        i++;
    }
    return (str);
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    ft_memalloc(atoi(av[1]));
    return (0);
}