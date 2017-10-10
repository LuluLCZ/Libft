/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 20:23:37 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/10 23:22:31 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char    *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    char        *S;
    int         i;

    i = 0;
    if (!(S = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
        return (NULL);
    while (s[i])
    {
        S[i] = f(i, s[i]);
        i++;
    }
    S[i] = '\0';
    return (S);
}