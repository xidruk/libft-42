/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:56:42 by kbarkan           #+#    #+#             */
/*   Updated: 2024/11/01 05:27:22 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	current_node = *lst;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		del(current_node->content);
		free(current_node);
		current_node = next_node;
	}
	*lst = NULL;
}
