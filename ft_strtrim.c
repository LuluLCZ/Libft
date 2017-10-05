/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 22:06:58 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/05 22:39:11 by llacaze          ###   ########.fr       */
=======
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:09:19 by Lulu              #+#    #+#             */
/*   Updated: 2017/10/05 14:20:32 by Lulu             ###   ########.fr       */
>>>>>>> fa547297c2b0be89c8fb03ecd357a6fbebca4d00
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
=======
#include <stdlib.h>
#include <string.h>
>>>>>>> fa547297c2b0be89c8fb03ecd357a6fbebca4d00

int     ft_strlen(char const *s)
{
    int     i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strtrim(char const *s)
{
<<<<<<< HEAD
    char    *S;
    int     i;
    int     a;
    int     j;

    j = 0;
    a = 0;
    i = 0;
    if (!(S = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
=======
    int     i;
    int     a;
    int     z;
    char    *S;

    if (!(S = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    i = 0;
    z = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
>>>>>>> fa547297c2b0be89c8fb03ecd357a6fbebca4d00
        i++;
    a = i;
    while (s[i])
        i++;
<<<<<<< HEAD
    while (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == '\0')
        i--;
    while (a < i)
    {
        S[j] = s[a];
        j++;
        a++;
    }
    S[j] = '\0';
=======
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
    {
        i--;
        z++;
    }
    i = 0;
    while (i < (a - z))
        S[i++] = s[a++];
>>>>>>> fa547297c2b0be89c8fb03ecd357a6fbebca4d00
    return (S);
}

int     main(int ac, char **av)
{
<<<<<<< HEAD
    (void)av;
    if (ac != 1)
        return (0);
    printf("%s", ft_strtrim("        \n       \t     bien ou koi         \n      \t  "));
=======
    if (ac != 2)
        return (0);
    printf("%s", ft_strtrim(av[1]));
>>>>>>> fa547297c2b0be89c8fb03ecd357a6fbebca4d00
    return (0);
}