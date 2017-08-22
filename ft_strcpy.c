/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:27:15 by llacaze           #+#    #+#             */
/*   Updated: 2017/08/22 13:33:14 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char    *ft_strcpy(char *dst, char *src)
{
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    printf("%s", ft_strcpy(av[1]));
    return (0);
}