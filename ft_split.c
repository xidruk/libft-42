/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:45:02 by kbarkan           #+#    #+#             */
/*   Updated: 2024/11/03 14:45:08 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

static	int	count_words(const char *str, char delimiter)
{
	int	word_count;
	int	in_word;

	word_count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != delimiter && !in_word)
		{
			word_count++;
			in_word = 1;
		}
		else if (*str == delimiter)
		{
			in_word = 0;
		}
		str++;
	}
	return (word_count);
}

static	char	*allocate_word(const char *start, const char *end)
{
	char	*word;

	word = malloc((end - start + 1) * sizeof(char));
	if (word)
	{
		ft_strncpy(word, start, end - start);
		word[end - start] = '\0';
	}
	return (word);
}

static	char	*get_next_word(const char **str, char delimiter)
{
	const char	*start;
	const char	*end;

	while (**str && **str == delimiter)
		(*str)++;
	start = *str;
	while (**str && **str != delimiter)
		(*str)++;
	end = *str;
	if (start == end)
		return (NULL);
	return (allocate_word(start, end));
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;
	int		i;
	char	*word;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	word = get_next_word(&s, c);
	while (word)
	{
		result[i++] = word;
		word = get_next_word(&s, c);
	}
	result[i] = (NULL);
	return (result);
}
