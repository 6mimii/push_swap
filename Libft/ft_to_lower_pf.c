/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_lower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:29:52 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/04/20 17:04:41 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_to_lower_pf(unsigned int num)
{
	int		count;
	char	*hexadecimal_table;

	count = 0;
	hexadecimal_table = "0123456789abcdef";
	if (num < 16)
		return (ft_putchar_pf(hexadecimal_table[num]));
	if (num >= 16)
	{
		count += ft_to_lower_pf(num / 16);
		count += ft_to_lower_pf(num % 16);
	}
	return (count);
}
