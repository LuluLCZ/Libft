/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 11:50:25 by Lulu              #+#    #+#             */
/*   Updated: 2017/08/30 11:57:22 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *dest;
    int     i;

    i = 0;
    if (!(dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
        return (NULL);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    printf("%s", ft_strdup(av[1]));
    return (0);
}