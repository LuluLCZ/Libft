/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:30:35 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/06 14:19:09 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

int     ft_toupper(int c)
{
    if (c >= 141 && c <= 172)
        return (c - 40);
    else
        return (c);
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    printf("%d", toupper(av[1]));
    return (0);
}