/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvoid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:26:13 by alisseye          #+#    #+#             */
/*   Updated: 2024/10/02 11:30:08 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printvoid(void *ptr)
{
	unsigned int	address;
	int				printed;

	address = (unsigned long)ptr;
	printed = 0;
	printed += ft_printstr("0x");
	printed += ft_printlhex(address, 0);
	return (printed);
}
