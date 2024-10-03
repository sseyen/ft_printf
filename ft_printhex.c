/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:37:09 by alisseye          #+#    #+#             */
/*   Updated: 2024/10/02 11:26:15 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int n, int uppercase)
{
	char	*ptr;
	int		len;

	ptr = ft_utox(n, uppercase);
	if (!ptr)
		return (0);
	len = 0;
	while (ptr[len])
	{
		ft_putchar_fd(ptr[len], 1);
		len++;
	}
	free(ptr);
	return (len);
}
