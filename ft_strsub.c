/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:03:01 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 14:09:09 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char const  *S;
    int         i;

    if(!(S = (char *)malloc(sizeof(len) + 1)))
        return (NULL);
    while (i < len)
    {
        S[i] = s[start];
        i++;
    }
    return (S);
}

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%s", ft_strsub(av[1], atoi(av[2]), atoi(av[3])));
    printf("%s", strsub(av[1], atoi(av[2]), atoi(av[3])));
    return (0);
}