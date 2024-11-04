/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:06:01 by kbarkan           #+#    #+#             */
/*   Updated: 2024/11/02 00:29:00 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign_value;
	int	index;

	index = 0;
	result = 0;
	sign_value = 1;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
	{
		index++;
	}
	if (str[index] == '-')
	{
		sign_value = -1;
		index++;
	}
	else if (str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (result * sign_value);
}
