/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 13:31:10 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/23 23:47:41 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    while (lst != NULL)
    {
        f(&(*lst));
        lst = lst->next;
    }
}