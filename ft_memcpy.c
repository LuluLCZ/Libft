/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:20:41 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 23:50:26 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    size_t  j;
    unsigned char   *DST;
    const char   *SRC;

    DST = dst;
    SRC = src;
    j = 0;
    i = 0;
    while (i < n)
        DST[i++] = SRC[j++];
    return (dst);
}