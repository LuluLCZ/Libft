/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 00:30:45 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/09 16:32:32 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char        *S;
    size_t      i;

    i = 0;
    if (!(S = (char *)malloc(sizeof(len) + 1)))
        return (NULL);
    while (i < len)
    {
        S[i] = s[start];
        i++;
        start++;
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