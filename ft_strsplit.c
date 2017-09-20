/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 08:26:00 by llacaze           #+#    #+#             */
/*   Updated: 2017/09/20 09:23:51 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_strlen(char const *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_detect(char const *s, char c)
{
    int     i;
    char    **tab;

    i = 0;
    if (s[i] == c)
    {
        tab[j][i] 
    }
}

char    **ft_strsplit(char const *s, char c)
{
    char    **tab;
    int     i;
    int     j;
    int     k;

    k = 0;
    j = 0;
    i = 0;
    if (!(tab = (char **)malloc(sizeof(char *) * ft_strlen(s) + 1)))
        return (NULL);
    while (s[i])
    {
        write(1, "o", 1);
        if (s[i] != c)
        {            
            write(1, "a", 1);
            *tab[k] = s[i];
            k++;
            i++;
        }
        else if (s[i] == c && s[i+1] != c)
        {
            write(1, "b", 1);
            k = 0;
            j++;
            i++;
        }
        else if (s[i] == c && s[i+1] == c)
        {
            write(1, "c", 1);
            i++;
        }
    }
    return (tab);
    free(tab);
}

int     main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    printf("%s", *ft_strsplit(av[1], *av[2]));
    return (0);
}