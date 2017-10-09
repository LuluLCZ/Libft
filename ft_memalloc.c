/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 08:12:21 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/09 16:58:48 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void    *ft_memalloc(size_t size)
{
    size_t  i;
    char    *str;

    i = 0;
    if (!(str = (char *)malloc(char) * size))
        return (NULL);
    while (i < size)
    {
        str[i] = 0;
        i++;
    }
    return (str);
}