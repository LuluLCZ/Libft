/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 17:08:27 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 17:10:45 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char    *ft_strcat(char *base, char *toadd);

int     main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    printf("%s", ft_strcat(av[1], av[2]));
    return (0);
}