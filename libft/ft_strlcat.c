/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:33:47 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 20:39:39 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	src_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	while ((dst_len + src_len + 1) < size && src[src_len])
	{
		dst[dst_len + src_len] = src[src_len];
		src_len++;
	}
	if (dst_len != size)
		dst[dst_len + src_len] = '\0';
	return (dst_len + ft_strlen(src));
}
