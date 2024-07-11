/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:43:26 by arosinsk          #+#    #+#             */
/*   Updated: 2024/06/10 14:51:52 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d_i(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += print_s("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		count += print_c('-');
		n = -n;
	}
	if (n >= 10)
		count += print_d_i(n / 10);
	count += print_c(n % 10 + '0');
	return (count);
}
