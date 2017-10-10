/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 12:10:35 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/10 00:12:24 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int     ft_atoi(const char *str)
{
    int     i;
    int     nb;
    int     signe;

    nb = 0;
    signe = 1;
    i = 0;
    while ((str[i] > 8 && str[i] < 14) ||(str[i] == ' '))
        i++;
    if (str[i] == '-')
        signe = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= 48 && str[i] <= 57)
        nb = nb * 10 + str[i] - '0';
    return (nb * signe);
}