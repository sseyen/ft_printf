/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:01:49 by alisseye          #+#    #+#             */
/*   Updated: 2024/09/30 17:45:57 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;

	printed = 0;
	va_start(args, format);
	while (*format)
	{
		write(1, format, 1);
		if (*format == '%')
		{
			printed += ft_printelem(format, args);
			format += 2;
		}
		else
		{
			ft_putchar_fd(*format, 1);
			printed++;
		}
	}
	va_end(args);
	return (printed);
}
