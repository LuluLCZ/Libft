/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:29:47 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/23 20:14:44 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *DST;
    unsigned char   *SRC;
    size_t          i;

    i = 0;
    DST = (unsigned char *)dst;
    SRC = (unsigned char *)src;
    if (DST > SRC)
    {
        while (len--)
        {
            *(DST+len) = *(SRC+len);
        }
    }
    else
    {
        while (i < len)
        {
            *(DST+i) = *(SRC+i);
            i++;
        }
    }
    return (dst);
}