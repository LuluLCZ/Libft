/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 22:54:31 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 13:37:33 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


char    *ft_strnew(size_t size)
{
    char    *str;
    int     i;

    i = 0;
    if (!(str = (char *)malloc(sizeof(size))))
        return (NULL);
    while (i < size)
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