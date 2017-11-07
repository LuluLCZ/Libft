/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:57:45 by Lulu              #+#    #+#             */
/*   Updated: 2017/11/07 12:57:31 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	a;
	size_t	len2;

	len2 = len;
	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		len = len2;
		a = i;
		j = 0;
		while (haystack[i + j] == needle[j] && i < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + a);
			len--;
		}
		a = 0;
		i++;
	}
	return (NULL);
}
