/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:54:32 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/26 15:14:43 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int     ft_strnequ(const char *s1, const char *s2, size_t len)
{
    if (ft_strncmp(s1, s2, len) == 0)
        return (1);
    return (0);
}