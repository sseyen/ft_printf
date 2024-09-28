/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:33:05 by alisseye          #+#    #+#             */
/*   Updated: 2024/09/28 22:29:24 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void	ft_get(const char *format)
// {
// 	return ;
// }

// type ft_gettype(const char *format)
// {
// 	return ;
// }

char	*ft_getstr(const char *format, va_list args) // think about the type, where to get, inside ft_printelem or ft_getstr
{
	return ("Not implemented");
}

const char	*ft_printelem(const char *format, va_list args)
{
	if (*format == '%')
	{
		format++;
		ft_putstr_fd(ft_getstr(format, args), 1); // ft_getstr parameters in thoughts
	}
	else
		ft_putchar_fd(*format++, 1);
	return (format);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	va_start(args, format);
	while (*format)
	{
		format = ft_printelem(format, args);
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	ft_printf("Hello, world!\n");
}
