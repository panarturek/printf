/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:55:16 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 20:41:04 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	len;

	len = ft_strlen(src);
	src_len = 0;
	if (size != 0)
	{
		while (src[src_len] != '\0' && src_len < (size - 1))
		{
			dst[src_len] = src[src_len];
			src_len++;
		}
		dst[src_len] = '\0';
	}
	return (len);
}
