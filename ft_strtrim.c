/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 22:06:58 by llacaze           #+#    #+#             */
/*   Updated: 2017/11/05 01:57:39 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_strtrim(char const *s)
{
    char    *S;
    int     i;
    int     a;
    int     j;

    j = 0;
    a = 0;
    i = 0;
    if (s)
    {
        if (!(S = (char *)malloc(sizeof(char) * ((i - a) + 1))))
            return (NULL);
        while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
            i++;
        if (s[i] == '\0')
        {
            /* 
            ici je ne pouvais pas return juste S sans lui assigner le 
            \0 donc j ai eu un probleme pdt un moment a cause de ca
            que je n avais pas vu
            */
            S[a] = s[i];
            return (S);
        }
        a = i;
        while (s[i])
            i++;
        while (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == '\0')
            i--;
        if (!(S = (char *)malloc(sizeof(char) * ((i - a) + 1))))
            return (NULL);
        while (a < i)
        {
            S[j] = s[a];
            j++;
            a++;
        }
        S[j] = '\0';
        return (S);
    }
    return (NULL);
}