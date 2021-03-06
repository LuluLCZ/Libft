/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:35:11 by llacaze           #+#    #+#             */
/*   Updated: 2017/11/07 12:25:36 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
