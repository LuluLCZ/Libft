/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 22:54:31 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/10 01:25:25 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strnew(size_t size)
{
    char    *str;
    size_t  i;

    i = 0;
    if (!(str = (char *)malloc(sizeof(size))))
        return (NULL);
    while (i < size)
    {
        str[i] = '\0';
        i++;
    }
    return (str);
}