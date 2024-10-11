/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printelem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:07:43 by alisseye          #+#    #+#             */
/*   Updated: 2024/10/11 18:54:30 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printelem(const char *format, va_list *ap)
{
	if (*format == 'c')
		return (ft_printchar((char)va_arg(*ap, int)));
	else if (*format == 's')
		return (ft_printstr(va_arg(*ap, char *)));
	else if (*format == 'p')
		return (ft_printptr(va_arg(*ap, void *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_printnum(va_arg(*ap, int)));
	else if (*format == 'u')
		return (ft_printunum(va_arg(*ap, unsigned int)));
	else if (*format == 'x')
		return (ft_printhex(va_arg(*ap, unsigned int), 0));
	else if (*format == 'X')
		return (ft_printhex(va_arg(*ap, unsigned int), 1));
	else if (*format == '%')
		return (ft_printchar('%'));
	return (0);
}
