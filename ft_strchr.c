/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:18:16 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 17:12:10 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strchr(char *s, int c)
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