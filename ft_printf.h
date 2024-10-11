/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:52:30 by alisseye          #+#    #+#             */
/*   Updated: 2024/10/11 18:59:45 by alisseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_printelem(const char *format, va_list *args);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printptr(void *ptr);
int		ft_printnum(int n);
int		ft_printunum(unsigned int n);
int		ft_printhex(unsigned int n, int uppercase);
int		ft_printlhex(unsigned long n, int uppercase);

char	*ft_utoa(unsigned int n);
char	*ft_utox(unsigned int n, int uppercase);
char	*ft_ultox(unsigned long n, int uppercase);

#endif