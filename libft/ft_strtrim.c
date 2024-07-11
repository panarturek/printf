/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:53:42 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 19:58:05 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	initial;
	size_t	terminal;
	char	*dup;

	initial = 0;
	terminal = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[initial] && ft_strchr(set, s1[initial]))
		initial++;
	if (initial == terminal)
		return (ft_strdup(""));
	while (s1[terminal - 1] && ft_strchr(set, s1[terminal - 1]))
		terminal--;
	dup = (char *)malloc(sizeof(char) * (terminal - initial + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1 + initial, (terminal - initial + 1));
	return (dup);
}

/*
#include <stdio.h>

int	main(void)
{

char	*dup = ft_strtrim("@@nbhell@b@@n@o wo@n@rld@bn@" , "@bn");
printf("%s" , dup );
return (0);
} */
