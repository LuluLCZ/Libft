/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 00:54:37 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/06 01:08:51 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char    *ft_itoa(int n)
{
    char    *NB;

    if(!(NB = (char *)malloc(sizeof(char) * n + 1)))
        return (NULL);
    if (n > 0)
    {
        
    }
}