/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 13:31:13 by llacaze           #+#    #+#             */
/*   Updated: 2017/10/26 15:17:10 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list  *New;

    if (!(New = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    if (lst)
    {
        New = f(lst);
        New->next = ft_lstmap(lst->next, f);
        return (New);
    }
    return (NULL);
}