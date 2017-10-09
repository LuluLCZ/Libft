/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 00:54:37 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/09 16:56:02 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int         ft_strlen(char  *s)
{
    int     i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

static int  ft_lenght(int n)
{
    int     len;

    len = 0;
    if (n < 0)
    {
        n = -n;
        len++;
    }
    if (n == 0)
        return (1);
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

static char *ft_newstringNB(int len, int n, int neg, char *NB)
{
    while (len >= 0)
    {
        NB[len] = (n % 10) + '0';
        n /= 10;
        len--;
    }
    if (neg < 0)
        NB[0] = '-';
    return (NB);
}

char        *ft_strdup(char *s)
{
    char    *dst;
    int     i;

    i = 0;
    if (!(dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);
    while (s[i])
    {
        dst[i] = s[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char        *ft_itoa(int n)
{
    char    *NB;
    int     neg;
    int     len;

    len = ft_lenght(n);
    neg = n;
    if(!(NB = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    NB[len] = '\0';
    len--;
    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    if (n == 0)
        NB[0] = 0;
    if (n < 0)
        n = -n;
    return (ft_newstringNB(len, n, neg, NB));
}