/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 09:39:19 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/13 21:41:37 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strncat(char *base, char *toadd, size_t n)
{
    int     i;
    int     j;
    size_t  len;
    char    *new;

    i = 0;
    j = 0;
    len = 0;
    if (!(new = (char *)malloc(sizeof(char) * (n + 1))))
        return (NULL);
    while (len < n)
    {
        len++;
        if (*base)
            new[i++] = *base++;
        else
            new[i++] = *toadd++;
    }
    new[i] = '\0';
    return (new);
}

int     main(int ac, char **av)
{
    /*char    a[20] = "Bonjour";
    char    b[] = " Comment ca va ?";
    size_t  len;

    len = 5;*/
    if (ac != 4)
        return (0); 
    printf("%s", ft_strncat(av[1], av[2], atoi(av[3])));
    return (0);
}