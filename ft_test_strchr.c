/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 17:11:13 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 17:11:55 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strchr(char *s, int c);

int     main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    printf("%s", ft_strchr(av[1], av[2][1]));
    printf("%s", strchr(av[1], av[2][1]));
    return (0);
}