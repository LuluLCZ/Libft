/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:18:16 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 15:37:08 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *strchr(char *s, int c)
{
    int     i;
    char    C;

    C = c;
    i = 0;
    while (s[i] != C)
        i++;
    if (s[i] == '\0')
        return (NULL);
    if (s[i] == C)
        return ((char *)s + i);
    return (NULL);
}

int     main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    printf("%s", ft_strchr(av[1], av[2][1]));
    printf("%s", strchr(av[1], av[2][1]));
    return (0);
}