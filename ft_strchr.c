/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:18:16 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/11 03:42:16 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t      i;
    size_t      j;
    char        C;

    j = ft_strlen(s);
    C = c;
    i = 0;
    while (i < j)
    {
        if (s[i] == C)
            return ((char *)s + i);
        i++;
    }
    return (NULL);
}