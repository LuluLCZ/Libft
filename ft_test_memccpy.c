/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 16:59:04 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 17:01:15 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n);

int     main(int ac, char **av)
{
    if (ac != 5)
        return (0);
    printf("%s", ft_memccpy(av[1], av[2], av[3][1], atoi(av[4])));
    printf("%s", memccpy(av[1], av[2], av[3][1], atoi(av[4])));
    return (0);
}