/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:29:47 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/11 00:23:41 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t          i;
    char            *DST;
    const char      *SRC;
    char            *TEMP;

    if (!(TEMP = (char *)malloc(sizeof(src + 1))))
        return (NULL);
    DST = dst;
    SRC = src;
    i = 0;
    while (i < len)
    {
        TEMP[i] = SRC[i];
        DST[i] = TEMP[i]; //si fonctionne ne pas utiliser le deuxieme while;
        i++;
    }
    //DST[i--] = '\0';
    free(TEMP);
    /*
    i = 0;
    while (i < len)
    {
        DST[i] = TEMP[i];
        i++;
    }
    */
    return (dst);
}