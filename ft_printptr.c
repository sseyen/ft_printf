/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:26:13 by alisseye          #+#    #+#             */
/*   Updated: 2024/10/11 19:09:50 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	unsigned long	address;
	int				printed;

	if (!ptr)
		return (ft_printstr("(nil)"));
	address = (unsigned long)ptr;
	printed = 0;
	printed += ft_printstr("0x");
	printed += ft_printlhex(address, 0);
	return (printed);
}
