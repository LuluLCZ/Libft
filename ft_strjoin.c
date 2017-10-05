/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 00:19:14 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/05 00:25:06 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     ft_strlen(char const *s)
{
    int     i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    int     i;
    int     j;

    i = 0;
    j = 0;
    if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[i])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}

int     main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    printf("%s", ft_strjoin(av[1], av[2]));
    return (0);
}