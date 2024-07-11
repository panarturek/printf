/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:42:10 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 20:23:20 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*output;
	unsigned int	i;

	output = ft_calloc(ft_strlen((char *)s) + 1, sizeof(char));
	if (!output)
		return (NULL);
	i = 0;
	while (i < ft_strlen((char *)s))
	{
		output[i] = (*f)(i, s[i]);
		i++;
	}
	output[i] = '\0';
	return (output);
}
