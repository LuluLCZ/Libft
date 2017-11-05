/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 00:33:38 by llacaze           #+#    #+#             */
/*   Updated: 2017/11/04 21:49:40 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char    *S;
    int     i;

    i = 0;
    if (s && f)
    {
        if (!(S = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
            return (NULL);
        while (s[i])
        {
            S[i] = f(s[i]);
            i++;
        }
        S[i] = '\0';
        return (S);
    }
    return (NULL);
}