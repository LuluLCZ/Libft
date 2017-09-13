/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 13:56:14 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/06 14:07:33 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}

int     main(int ac, char **av)
{
    if (ac == 0)
        return (0);
    ft_isalpha(atoi(av[1]));
    return (0);
}