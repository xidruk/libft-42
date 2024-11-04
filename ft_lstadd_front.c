/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:41:59 by kbarkan           #+#    #+#             */
/*   Updated: 2024/11/01 05:15:00 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*
This function is add a new node in the head of the list ::jk

ex ::
[
    some nodes  :: node1 ,  node2 , node3 , node4
    declare new list :: t_list *__NEW_LIST = NULL;
    
    call func >> ft_lstadd_front(&t_list, node1);
    __NEW_LIST :: node1;

    ft_lstadd_front(&t_list, node2);

    __NEW_LIST :: node2->node1;

    ft_lstadd_front(&t_list, node2);

    __NEW_LIST :: node3->node2->node1;
    
    ft_lstadd_front(&t_list, node2);

    __NEW_LIST :: node4->node3->node2->node1;
]
*/
