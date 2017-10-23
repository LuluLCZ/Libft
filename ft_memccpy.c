/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:27:10 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/22 19:25:58 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char   *DST;
    char            *SRC;
    char            C;
    size_t          i;

    i = 0;
    C = c;
    DST = (void *)dst;
    SRC = (void *)src;
    while (i < n)
    {
        DST[i] = SRC[i];
        if (SRC[i] == C)
            return (dst + i + 1);
        i++;
    }
    return (NULL);
}