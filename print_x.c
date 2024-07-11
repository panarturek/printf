/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 23:34:06 by arosinsk          #+#    #+#             */
/*   Updated: 2024/06/10 14:53:01 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(unsigned long n, int to_upper)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_x(n / 16, to_upper);
	if (n % 16 < 10)
		count += print_c(n % 16 + '0');
	else
	{
		if (to_upper)
			count += print_c(n % 16 - 10 + 'A');
		else
			count += print_c(n % 16 - 10 + 'a');
	}
	return (count);
}
