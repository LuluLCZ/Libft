/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:20:41 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/14 13:39:04 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memcpy(void *dst, void *src, size_t n)
{
    size_t  i;
    int     j;
    char    *str;

    str = dst;
    i = 0;
    j = 0;
    while (i < n)
        dst[i++] = src[j++];
    return (str);
}