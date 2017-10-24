/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 13:31:13 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/24 02:27:42 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list  *NEW;
    t_list  *TORETURN;

    NEW = (*f)(lst);
    TORETURN = NEW;
    while (lst)
    {
        NEW->next = (*f)(lst->next);
        NEW = NEW->next;
        lst = lst->next;
    }
    return (TORETURN);
}