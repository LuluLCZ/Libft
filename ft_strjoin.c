/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 00:19:14 by llacaze           #+#    #+#             */
/*   Updated: 2017/11/04 21:54:07 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char            *str;
    int             i;
    int             j;

    i = 0;
    j = 0;
    if (s1 && s2)
    {
        if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
            return (NULL);
        while (s1[i])
        {
            str[i] = s1[i];
            i++;
        }
        while (s2[j])
        {
            str[i] = s2[j];
            i++;
            j++;
        }
        str[i] = '\0';
        return (str);
    }
    return (NULL);
}