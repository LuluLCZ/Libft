/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 13:41:14 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 13:21:05 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (dst[i] && i < size)
        i++;
    while (src[j])
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (i);
}

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%lu", ft_strlcat(av[1], av[2], atoi(av[3])));
    return (0);
}