/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 19:47:50 by arosinsk          #+#    #+#             */
/*   Updated: 2024/05/14 00:32:18 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strjoined;

	if (!s1 || !s2)
		return (NULL);
	strjoined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (strjoined == NULL)
		return (NULL);
	ft_strlcpy(strjoined, (char *)s1, (ft_strlen(s1) + 1));
	ft_strlcat(strjoined, (char *)s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (strjoined);
}
