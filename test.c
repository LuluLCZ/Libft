/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 00:16:34 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/06 00:40:14 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_strlen(const char *s)
{
    int     i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char        *S;
    size_t      i;

    i = 0;
    if (!(S = (char *)malloc(sizeof(len) + 1)))
        return (NULL);
    while (i < len)
    {
        S[i] = s[start];
        i++;
        start++;
    }
    return (S);
}

char	**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	d;
	int		start;
	int		end;
	char	**tab;

	tab = NULL;
	i = 0;
	d = 0;
	if (s && (tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s)))))
	{
		while (s[i] != '\0')
		{
			while (s[i] && s[i] == c)
				i++;
			start = i;
			while (s[i] && s[i] != c)
				i++;
			end = i;
			if (end > start)
				tab[d++] = ft_strsub(s, start, (end - start));
		}
		tab[d] = NULL;
	}
	return (tab);
}

int     main(int ac, char **av)
{
    (void)ac;
    (void)av;
    char **ret;
    int index = 0;
 
    ret = ft_strsplit("*ghel*lo*f", '*');
    while (ret[index])
    {
        printf("%s\n", ret[index]);
        index++;
    }
    return (0);
}