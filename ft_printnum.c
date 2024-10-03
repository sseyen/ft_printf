/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:29:05 by alisseye          #+#    #+#             */
/*   Updated: 2024/10/03 14:38:27 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnum(int n)
{
	char	*ptr;
	int		len;

	ptr = ft_itoa(n);
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
