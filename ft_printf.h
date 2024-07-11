/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:39:01 by arosinsk          #+#    #+#             */
/*   Updated: 2024/06/10 14:14:25 by arosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_vprintf(const char *format, va_list args);
int	ft_identify_format(char c, va_list args);
int	print_c(int c);
int	print_s(char *s);
int	print_d_i(int n);
int	print_u(unsigned int n);
int	print_x(unsigned long n, int to_upper);
int	print_p(void *ptr);

#endif
