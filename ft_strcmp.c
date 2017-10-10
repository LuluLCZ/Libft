/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:35:32 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/11 00:18:17 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    ft_strcmp(const char *s1, const char *s2)
{
    int             i;
    unsigned int    j;

    i = 0;
    j = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    j = s1[i] - s2[i];
    return (j);
}
