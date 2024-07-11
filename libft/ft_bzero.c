/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:01:35 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 19:56:43 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	int	c;

	c = 0;
	while (n--)
	{
		*((unsigned char *)s++) = (unsigned char)c;
	}
}

/*
The	bzero(void) function erases the data in the n bytes of the memory starting
at the location pointed to by s,
	by writing zeros (bytes containing '\0') to that area.

The	explicit_bzero(void)  function  performs the same task as bzero().
It differs from bzero() in that it guarantees that compiler optimizations
will not remove the erase operation if the compiler de‐
duces that the operation is "unnecessary".

 */