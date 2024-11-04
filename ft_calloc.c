/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:29:07 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/31 23:31:10 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_memory;
	size_t	total_size;

	total_size = count * size;
	allocated_memory = malloc(total_size);
	if (allocated_memory == NULL)
		return (NULL);
	ft_memset(allocated_memory, 0, total_size);
	return (allocated_memory);
}
