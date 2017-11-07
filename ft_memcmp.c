/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:23:04 by Lulu              #+#    #+#             */
/*   Updated: 2017/11/07 12:18:33 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s12;
	unsigned char	*s22;

	i = 0;
	s12 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	//if (s1 == NULL && s2 == NULL)
	//    return (0);
	while (i < n)
	{
		if (s12[i] != s22[i])
			return (s12[i] - s21[i]);
		i++;
	}
	return (0);
}
