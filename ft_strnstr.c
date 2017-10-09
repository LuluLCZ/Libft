/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:57:45 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/09 19:41:58 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strnstr(char *haystack, char *needle, size_t len)
{
    int     i;
    int     j;
    int     a;

    i = 0;
    if (*needle == '\0')
        return (haystack);
    while (haystack[i] && len)
    {
        a = i;
        j = 0;
        while (haystack[i] == needle[j])
        {
            i++;
            j++;
            if (len == 0)
                return (NULL);
            if (needle[j] == '\0')
                return (haystack + a);
            len--;
        }
        a = 0;
        i++;
    }
    return (NULL);
}