/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:57:45 by Lulu              #+#    #+#             */
/*   Updated: 2017/11/05 02:57:23 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  a;
    size_t  LEN;

    LEN = len;
    i = 0;
    if (*needle == '\0')
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        len = LEN;
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