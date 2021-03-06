/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 13:41:14 by Lulu              #+#    #+#             */
/*   Updated: 2017/11/07 12:27:54 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	end_dst;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		//&&i < size ou  i<=size a test
		i++;
	end_dst = i;
	if (size == 0)
		return (end_dst + ft_strlen(src));
	while (src[j] && i < size - 1)//ici avec i on a deja ft_strlen(dst) et il veut que ca se passe
		//seulement size - 1 - ft_strlen(dst) fois; CHECK man si pas compris
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (end_dst < size)
		dst[i] = '\0';
	return (end_dst + ft_strlen(src));
}
