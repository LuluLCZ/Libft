/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 19:42:23 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/10 18:47:39 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    **ft_strsplit(char const *s, char c);

int     main(int ac, char **av)
{
    (void)ac;
    (void)av;
    char **ret;
    int index = 0;
 
    ret = ft_strsplit("      split       this for   me  !       ", ' ');
    while (ret[index])
    {
        printf("%s\n", ret[index]);
        index++;
    }
    return (0);
}