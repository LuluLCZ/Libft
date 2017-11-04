/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 13:31:10 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/25 22:05:11 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    while (lst)
    {
        f(lst);
        lst = lst->next;
    }
}