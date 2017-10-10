/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:18:16 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/10 00:10:55 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strchr(const char *s, int c)
{
    int     i;
    char    C;

    C = c;
    i = 0;
    while (s[i] != C)
        i++;
    if (s[i] == '\0')
        return (NULL);
    if (s[i] == C)
        return ((char *)s + i);
    return (NULL);
}