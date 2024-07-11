/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 23:38:04 by arosinsk          #+#    #+#             */
/*   Updated: 2024/06/10 14:03:47 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vprintf(const char *format, va_list args)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_identify_format(format[++i], args);
		}
		else
			count += print_c(format[i]);
		++i;
	}
	return (count);
}

int	ft_identify_format(char c, va_list args)
{
	if (c == 's')
		return (print_s(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (print_d_i(va_arg(args, int)));
	else if (c == 'u')
		return (print_u(va_arg(args, unsigned int)));
	else if (c == 'c')
		return (print_c(va_arg(args, int)));
	else if (c == 'x')
		return (print_x(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (print_x(va_arg(args, unsigned int), 1));
	else if (c == 'p')
		return (print_p(va_arg(args, void *)));
	else
		return (print_c(c));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = ft_vprintf(format, args);
	va_end(args);
	return (count);
}
