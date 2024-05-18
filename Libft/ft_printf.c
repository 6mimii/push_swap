/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:19:35 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/04/20 17:00:37 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_format(const char a, va_list list)
{
	int	i;

	i = 0;
	if (a == 'c')
		i += ft_putchar_pf(va_arg(list, int));
	else if (a == 's')
		i += ft_putstr_pf(va_arg(list, char *));
	else if (a == 'p')
		i += ft_to_hexadecimal_pf(va_arg(list, unsigned long));
	else if (a == 'i' || a == 'd')
		i += ft_putchar_pf(va_arg(list, int));
	else if (a == 'u')
		i += ft_putnbr_unsigned_int_pf(va_arg(list, unsigned int));
	else if (a == 'x')
		i += ft_to_lower_pf(va_arg(list, unsigned int));
	else if (a == 'X')
		i += ft_to_upper_pf(va_arg(list, unsigned int));
	else if (a == '%')
		i += write (1, "%%", 1);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	list;

	len = 0;
	va_start(list, str);
	if (write(1, "", 0) == -1)
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += ft_format(*str, list);
		}
		else
			len += write(1, str, 1);
		str++;
	}
	va_end(list);
	return (len);
}
