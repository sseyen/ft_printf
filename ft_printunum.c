/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:32:42 by alisseye          #+#    #+#             */
/*   Updated: 2024/09/30 17:21:57 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunum(unsigned int n)
{
	char	*ptr;
	int		len;

	ptr = ft_utoa(n);
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
