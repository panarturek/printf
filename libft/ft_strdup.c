/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:52:50 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 20:39:47 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;

	s1 = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!s1)
		return (NULL);
	ft_memcpy(s1, s, ft_strlen(s));
	s1[ft_strlen(s)] = '\0';
	return (s1);
}
