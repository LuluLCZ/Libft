/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:23:04 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/22 20:05:55 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t      i;
    unsigned char  *S1;
    unsigned char  *S2;
    
    i = 0;
    S1 = (unsigned char *)s1;
    S2 = (unsigned char *)s2;
    //if (s1 == NULL && s2 == NULL)
    //    return (0);
    while (i < n)
    {
        if (S1[i] != S2[i])
            return (S1[i] - S2[i]);
        i++;
    }
    return (0);
}