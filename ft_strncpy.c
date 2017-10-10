/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:54:26 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/10 02:10:24 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char    *ft_strncpy(char *dst, const char *src, size_t n)
{
    size_t  i;
    size_t  len;
    
    len = ft_strlen(src);
    i = 0;
    if (!dst || !src)
        return (NULL);
    if (n == 0)
        return (dst);
    while (i < n)
    {
        if (i > len)
            dst[i] = '\0';
        else
            dst[i] = src[i];
        i++;
    }
    return (dst);
}