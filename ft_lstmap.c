/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:32:48 by kbarkan           #+#    #+#             */
/*   Updated: 2024/11/03 16:59:32 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*head;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (0);
	new_node = ft_lstnew(f(lst->content));
	if (!new_node)
		return (NULL);
	new_list = new_node;
	head = new_list;
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_list->next = new_node;
		new_list = new_node;
		lst = lst->next;
	}
	return (head);
}
