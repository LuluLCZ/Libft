/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 22:54:31 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/19 23:05:49 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


char    *ft_strnew(size_t size)
{
    char    *str;
    int     i;

    i = 0;
    str = (char *)malloc(sizeof(size));
    while (str[i] == '\0')
    {
        str[i] = '\0';
        i++;
    }
    return (str);
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    (void)av;
    printf("%s", ft_strnew(atoi(av[1])));
    return (0);
}