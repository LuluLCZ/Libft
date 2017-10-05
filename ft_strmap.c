/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 00:33:38 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/05 00:41:20 by llacaze          ###   ########.fr       */
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
    while(s[i])
        i++;
    return (i);
}

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

int     main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    printf("%s", ft_strmap(av[1], av[2]));
    return (0);
}