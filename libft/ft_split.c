/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:17:31 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 20:33:03 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

int	ft_wordlenght(const char *s, char c)
{
	if (!ft_strchr(s, c))
		return (ft_strlen(s));
	else
		return (ft_strchr(s, c) - s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	wordlenght;
	int		i;

	if (!s)
		return (NULL);
	result = (char **)malloc((ft_wordcounter(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			wordlenght = ft_wordlenght(s, c);
			result[i++] = ft_substr(s, 0, wordlenght);
			s += wordlenght;
		}
	}
	result[i] = NULL;
	return (result);
}
