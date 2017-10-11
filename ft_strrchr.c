/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 14:47:03 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/11 03:35:34 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t      i;
    size_t      a;
    size_t      j;
    char        C;

    C = c;
    j = ft_strlen(s);
    a = 0;
    i = 0;
    while (i < j)
    {
        if (s[i] == C)
            a = i;
        i++;
    }
    if (a != 0)
        return ((char *)s + a);
    else
        return (NULL);
}