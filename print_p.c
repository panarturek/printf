/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:02:55 by arosinsk          #+#    #+#             */
/*   Updated: 2024/06/10 13:15:42 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	else
	{
		count += print_s("0x");
		count += print_x((unsigned long)ptr, 0);
		return (count);
	}
}
