/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:30:28 by kbarkan           #+#    #+#             */
/*   Updated: 2024/11/03 16:31:45 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count_nodes;

	count_nodes = 0;
	while (lst != NULL)
	{
		count_nodes++;
		lst = lst->next;
	}
	return (count_nodes);
}
