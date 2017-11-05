/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:12:41 by llacaze           #+#    #+#             */
/*   Updated: 2017/11/04 21:58:57 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     ft_strequ(const char *s1, const char *s2)
{
    int     i;

    i = 0;
    if (s1 && s2)
    {
        while (s1[i] == s2[i] && s1[i] && s2[i])
            i++;
        if (s1[i] == s2[i])
            return (1);
        else
            return (0);
    }
    return (0);
}