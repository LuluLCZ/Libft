/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 13:41:14 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 01:34:07 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (dst[i] && i < size)
        i++;   
}*/

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%lu", strlcat(av[1], av[2], atoi(av[3])));
    return (0);
}