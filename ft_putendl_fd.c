/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:48:37 by kbarkan           #+#    #+#             */
/*   Updated: 2024/11/02 00:46:16 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	index = 0;
	if (!s)
		return ;
	if (fd < 0)
		return ;
	while (s[index] != '\0')
	{
		write(fd, &s[index], 1);
		index++;
	}
	write(fd, "\n", 1);
}
