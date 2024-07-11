/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:45:06 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 20:24:09 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(int c)
{
	int	count;

	count = 0;
	if (c == 0)
		count = 1;
	else
	{
		while (c)
		{
			c /= 10;
			count++;
		}
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*table;
	long int	number;
	int			totaldigits;

	number = n;
	totaldigits = ft_countdigits(n);
	if (n < 0)
	{
		number *= (-1);
		totaldigits++;
	}
	table = (char *)malloc(sizeof(char) * (totaldigits + 1));
	if (!table)
		return (NULL);
	*(table + totaldigits) = 0;
	while (totaldigits--)
	{
		*(table + totaldigits) = number % 10 + '0';
		number = number / 10;
	}
	if (n < 0)
		*(table + 0) = '-';
	return (table);
}
