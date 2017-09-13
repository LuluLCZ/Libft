/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 14:09:43 by Lulu              #+#    #+#             */
/*   Updated: 2017/09/06 14:19:13 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 40);
    else
        return (c);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        printf("%d", ft_tolower(atoi(av[1])));
}