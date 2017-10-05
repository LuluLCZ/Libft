/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:27:10 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/05 13:31:27 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char        *DST;
    const char  *SRC;
    char        C;
    int         i;

    i = 0;
    C = c;
    DST = dst;
    SRC = src;
    while (i < n)
    {
        if (SRC[i] == C)
            return (dst + i + 1);
        DST[i] = SRC[i];
        i++;
    }
    return (NULL);
}

int     main(int ac, char **av)
{
    if (ac != 5)
        return (0);
    printf("%s", ft_memccpy(av[1], av[2], av[3][1], atoi(av[4])));
    printf("%s", memccpy(av[1], av[2], av[3][1], atoi(av[4])));
    return (0);
}