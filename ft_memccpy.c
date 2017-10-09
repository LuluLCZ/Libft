/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:27:10 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/09 17:01:18 by Lulu             ###   ########.fr       */
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