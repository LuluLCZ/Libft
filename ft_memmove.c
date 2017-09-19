/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:29:47 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/19 22:50:21 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  n;
    size_t  i;
    char    *str;

    str = dst;
    i = 0;
    n = 0;

    while (str[i])
        i++;
    
    while (n < len)
    {
        str[i] = src[n];
        i++;
        n++;
    }
    return (dst);
}