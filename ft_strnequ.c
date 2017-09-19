/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:54:32 by llacaze           #+#    #+#             */
/*   Updated: 2017/09/19 15:55:55 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     ft_strnequ(const char *s1, const char *s2, size_t len)
{
    size_t     i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i] && i < len)
        i++;
    if (s1[i] == s2[i])
        return (1);
    else
        return (0);
}

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%d", ft_strnequ(av[1], av[2], atoi(av[3])));
    return (0);
}