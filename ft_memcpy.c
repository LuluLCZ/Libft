/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:20:41 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 13:26:36 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memcpy(void *dst, void *src, size_t n)
{
    size_t  i;
    unsigned char   *DST;
    unsigned char   *SRC;

    DST = dst;
    SRC = src;
    i = 0;
    while (i < n)
        DST[i++] = SRC[j++];
    return (dst);
}