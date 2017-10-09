/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:12:41 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/09 19:41:12 by llacaze          ###   ########.fr       */
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
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    if (s1[i] == s2[i])
        return (1);
    else
        return (0);
}