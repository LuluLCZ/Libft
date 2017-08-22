/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:33:28 by llacaze           #+#    #+#             */
/*   Updated: 2017/08/22 13:35:24 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    ft_strlen(av[1]);
    return (0);
}