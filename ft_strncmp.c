/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:38:23 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/26 14:34:29 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     ft_strncmp(const char *s1, const char *s2, int n)
{
    int     i;

    i = 0;
    if (n == 0)
        return (0);
    while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}/*

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
    printf("%d", strncmp(av[1], av[2], atoi(av[3])));
    return (0);
}*/