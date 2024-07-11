/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 23:32:21 by arosinsk          #+#    #+#             */
/*   Updated: 2024/06/10 14:52:37 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_u(n / 10);
	count += print_c(n % 10 + '0');
	return (count);
}
