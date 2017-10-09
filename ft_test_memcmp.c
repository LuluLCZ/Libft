/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 17:06:35 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 17:06:55 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%d", ft_memcmp(av[1], av[2], atoi(av[3])));
    printf("%d", memcmp(av[1], av[2], atoi(av[3])));
    return (0);
}