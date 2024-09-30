/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 20:21:47 by alisseye          #+#    #+#             */
/*   Updated: 2024/09/30 17:37:30 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 16;
	}
	return (len);
}

char	*ft_utox(unsigned int n, int uppercase)
{
	char	*str;
	char	*digits;
	char	digit;
	int		len;

	digits = "0123456789abcdef";
	len = ft_hexlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0)
	{
		digit = digits[n % 16];
		if (uppercase)
			digit = ft_toupper(digit);
		str[len] = digit;
		n /= 16;
		len--;
	}
	return (str);
}
