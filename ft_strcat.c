/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 09:25:01 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/13 09:38:40 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char    *ft_strcat(char *base, char *toadd)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (base[i])
        i++;
    while (toadd[j] != '\0')
    {
        base[i] = toadd[j];
        i++;
        j++;
    }
    base[i] = '\0';
    return (base);
}

int     main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    printf("%s", ft_strcat(av[1], av[2]));
    return (0);
}