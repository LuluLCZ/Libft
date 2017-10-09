/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 22:06:58 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/09 19:43:35 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     ft_strlen(char const *s)
{
    int     i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strtrim(char const *s)
{
    char    *S;
    int     i;
    int     a;
    int     j;

    j = 0;
    a = 0;
    i = 0;
    if (!(S = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        i++;
    a = i;
    while (s[i])
        i++;
    while (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == '\0')
        i--;
    while (a < i)
    {
        S[j] = s[a];
        j++;
        a++;
    }
    S[j] = '\0';
    return (S);
}