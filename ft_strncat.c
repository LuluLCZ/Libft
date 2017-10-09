/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 09:39:19 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 19:41:37 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strncat(char *base, char *toadd, size_t n)
{
    int     i;
    int     j;
    size_t  len;
    char    *new;

    i = 0;
    j = 0;
    len = 0;
    if (!(new = (char *)malloc(sizeof(char) * (n + 1))))
        return (NULL);
    while (len < n)
    {
        len++;
        if (*base)
            new[i++] = *base++;
        else
            new[i++] = *toadd++;
    }
    new[i] = '\0';
    return (new);
}