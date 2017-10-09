/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 17:03:56 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 17:06:00 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memchr(const void *s1, int c, size_t n);

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%s", ft_memchr(av[1], av[2][1], atoi(av[3])));
    printf("%s", memchr(av[1], av[2][1], atoi(av[3])));
    return (0);
}