/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:30:35 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/10 00:50:56 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

int     ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}