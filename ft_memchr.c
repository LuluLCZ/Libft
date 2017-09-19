/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:18:39 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/18 12:22:33 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    int     j;
    const char    *str;

    str = s;
    i = 0;
    j = 0;
    while (i < n)
    {
        if (str[j] = c)
            return (str[j]);
        j++;
        i++;
    }
    return (NULL);
}