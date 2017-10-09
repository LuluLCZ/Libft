/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:54:26 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/09 19:41:45 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strncpy(char *dst, char *src, int n)
{
    int     i;
    
    i = 0;
    while (src[i] && i <= n)
    {
        src[i] == dst[i];
        i++;
    }
    return (dst);
}