/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:29:29 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 15:44:33 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char    *ft_strstr(char *haystack, char *needle)
{
    int     i;
    int     j;
    int     a;

    a = 0;
    i = 0;
    if (needle[i] == '\0')
        return (haystack);
    while (haystack[i] != '\0')
    {
        j = 0;
        a = i;
        while (haystack[i] == needle[j])
        {
            i++;
            j++;
            if (needle[j] == '\0')
                return (haystack + a);
        }
        a = 0;
        i++;
    }
    return (NULL);
}

int     main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    
    printf("%s\n", ft_strstr(av[1], av[2]));
    printf("%s", strstr(av[1], av[2]));
    return (0);
}