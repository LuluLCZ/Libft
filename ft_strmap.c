/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 00:33:38 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/10 01:25:12 by llacaze          ###   ########.fr       */
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