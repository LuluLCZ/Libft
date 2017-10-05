/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:09:19 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 14:20:32 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int     i;
    int     a;
    int     z;
    char    *S;

    if (!(S = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    i = 0;
    z = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i++;
    a = i;
    while (s[i])
        i++;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
    {
        i--;
        z++;
    }
    i = 0;
    while (i < (a - z))
        S[i++] = s[a++];
    return (S);
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    printf("%s", ft_strtrim(av[1]));
    return (0);
}