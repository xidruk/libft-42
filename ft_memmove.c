/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:45:51 by kbarkan           #+#    #+#             */
/*   Updated: 2024/11/04 07:38:07 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_memmove_forward(unsigned char *dst,
		const unsigned char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

static	void	ft_memmove_backward(unsigned char *dst,
		const unsigned char *src, size_t len)
{
	while (len > 0)
	{
		len--;
		dst[len] = src[len];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (len == 0)
		return (dst);
	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
		ft_memmove_forward(d, s, len);
	else
		ft_memmove_backward(d, s, len);
	return (dst);
}
