/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:18:16 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/06 14:40:05 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strchr(char *s, int c)
{
    int     i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (s[i]);
        i++;
    }
    return (NULL);
}