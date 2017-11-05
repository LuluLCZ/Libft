/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 21:45:44 by llacaze           #+#    #+#             */
/*   Updated: 2017/11/04 21:46:45 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    ft_striteri(char *s, void(*f)(unsigned int, char *))
{
    unsigned int    i;

    i = 0;
    if (s && f)
    {    while (s[i])
        {
            f(i, &s[i]);
            i++;
        }
    }
}