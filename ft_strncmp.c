/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:38:23 by llacaze           #+#    #+#             */
/*   Updated: 2017/08/22 13:41:47 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     ft_strncmp(char *s1, char *s2, int n)
{
    int     i;

    i = 0;
    while (i <= n && s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%d", ft_strncmp(av[1], av[2], atoi(av[3])));
    return (0);
}