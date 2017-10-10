/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 22:54:31 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/11 00:05:37 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strnew(size_t size)
{
    char    *str;
    size_t  i;

    i = 0;
    if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
        return (NULL);
    while (i < size)
    {
        str[i] = '\0';
        i++;
    }
    str[i] = '\0';
    return (str);
}