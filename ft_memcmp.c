/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:23:04 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 17:06:56 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    const char  *S1;
    const char  *S2;
    
    i = 0;
    S1 = s1;
    S2 = s2;
    while (i < n)
    {
        if (S1[i] != S2[i])
            return (S1[i] - S2[i])
        i++;
    }
    return (0);
}