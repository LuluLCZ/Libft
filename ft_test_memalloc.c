/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 16:57:44 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 16:58:44 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void    *ft_memalloc(size_t size);

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    ft_memalloc(atoi(av[1]));
    return (0);
}