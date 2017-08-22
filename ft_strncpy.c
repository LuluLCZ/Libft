/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:54:26 by llacaze           #+#    #+#             */
/*   Updated: 2017/08/22 14:00:00 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strncpy(char *dst, char *src, int n)
{
    int     i;
    
    i = 0;
    while (src[i] && i <= n)
    {
        src[i] == dst[i];
        i++;
    }
    return (dst);
}

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%d", ft_strncpy(av[1], av[2], atoi(av[3])));
    return (0);
}