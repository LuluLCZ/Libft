/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 00:30:45 by llacaze           #+#    #+#             */
/*   Updated: 2017/11/04 21:53:29 by Lulu             ###   ########.fr       */
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
    if (s)
    {
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
    return (NULL);
}