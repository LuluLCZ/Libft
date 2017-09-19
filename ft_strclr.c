/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:58:33 by llacaze           #+#    #+#             */
/*   Updated: 2017/09/19 16:01:28 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void    ft_strclr(char *s)
{
    int     i;

    i = 0;
    while (s[i])
    {
        s[i] = '\0';
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    ft_strclr(av[1]);
    printf("%s", av[1]);
    return (0);
}