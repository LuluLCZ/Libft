/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 00:30:45 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/10 23:55:50 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char        *S;
    size_t      i;

    i = 0;
    if (!(S = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (i < len)
    {
        S[i] = s[start];
        i++;
        start++;
    }
    S[i] = '\0';
    return (S);
}