/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:58:38 by arosinsk          #+#    #+#             */
/*   Updated: 2024/04/09 20:44:21 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		number *= 10;
		number += (*nptr - 48);
		nptr++;
	}
	number *= sign;
	return (number);
}
// int main()
// {
//     const char *nptr = "    -+42";
//     printf("%d\n", ft_atoi(nptr));
//     printf("%d\n", atoi(nptr));
// }
