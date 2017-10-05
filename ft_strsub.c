/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 00:30:45 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/06 00:35:21 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char        *S;
    size_t      i;

    i = 0;
    if (!(S = (char *)malloc(sizeof(len) + 1)))
=======
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:03:01 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 14:09:09 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char const  *S;
    int         i;

    if(!(S = (char *)malloc(sizeof(len) + 1)))
>>>>>>> fa547297c2b0be89c8fb03ecd357a6fbebca4d00
        return (NULL);
    while (i < len)
    {
        S[i] = s[start];
        i++;
<<<<<<< HEAD
        start++;
=======
>>>>>>> fa547297c2b0be89c8fb03ecd357a6fbebca4d00
    }
    return (S);
}

int     main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    printf("%s", ft_strsub(av[1], atoi(av[2]), atoi(av[3])));
<<<<<<< HEAD
=======
    printf("%s", strsub(av[1], atoi(av[2]), atoi(av[3])));
>>>>>>> fa547297c2b0be89c8fb03ecd357a6fbebca4d00
    return (0);
}