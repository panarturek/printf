/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:16:21 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 20:23:39 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (s[i] != (char)c && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		return (NULL);
	return ((char *)&s[i]);
}
