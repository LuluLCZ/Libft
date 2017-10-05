/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:18:39 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 13:23:40 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   C;
    const char      *S;

    S = s;
    i = 0;
    C = c;
    while (i < n)
    {
        if (S[i] = C)
            return ((void *)s + i);
        i++;
    }
    return (NULL);
}

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%s", ft_memchr(av[1], av[2][1], atoi(av[3])));
    printf("%s", memchr(av[1], av[2][1], atoi(av[3])));
}