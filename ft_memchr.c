/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:18:39 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/11 03:28:27 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    char            C;
    const char      *S;

    S = s;
    i = 0;
    C = c;
    while (i < n)
    {
        if (S[i] == C)
            return ((void *)s + i);
        i++;
    }
    return (NULL);
}