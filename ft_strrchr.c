/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 14:47:03 by Lulu              #+#    #+#             */
/*   Updated: 2017/11/05 01:34:10 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t      i;
    size_t      j;

    j = ft_strlen(s);
    i = 0;
    if ((char)c == '\0')
        return ((char *)s + j);
    while (j > 0)
    {
        if (s[j] == (char)c)
            return ((char *)s + j);
        j--;
    }
    if (s[i] == (char)c)
        return ((char *)s + i);//on effectue un test pour que la 
                                //fonction fonctionne meme sur le
                                //premier caractere de la fonction
                                //etant donne que l on part de la fin
                                //et que j est un size_t on peut seulement
                                //mettre en condition le fait que j > 0 et 
                                //on ne peut pas mettre -1 donc on test juste
                                //avec i = 0 etant donne que j ne test pas pour
                                //cette valeur
    return (NULL);
}