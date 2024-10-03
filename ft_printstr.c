/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:24:11 by alisseye          #+#    #+#             */
/*   Updated: 2024/10/01 14:15:35 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	len;

	if (!str)
		return (ft_printstr("(null)"));
	len = 0;
	while (str[len])
	{
		ft_putchar_fd(str[len], 1);
		len++;
	}
	return (len);
}
