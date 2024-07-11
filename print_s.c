/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:56:57 by arosinsk          #+#    #+#             */
/*   Updated: 2024/06/10 14:12:59 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (write(1, "(null)", 6));
	else
	{
		while (*s)
		{
			write(1, s, 1);
			s++;
			count++;
		}
	}
	return (count);
}
