/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 16:49:54 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 16:55:43 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_isalpha(int c);

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    printf("%d", ft_isalpha(av[1][0]));
    return (0);
}