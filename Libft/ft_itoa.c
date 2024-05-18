/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:15:39 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/01/22 15:26:41 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counting(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		is_negative;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	is_negative = n < 0;
	if (is_negative)
		n = -n;
	len = ft_counting(n);
	str = malloc(len + 1 + is_negative);
	if (!str)
		return (NULL);
	str[len + is_negative] = '\0';
	while (len--)
	{
		str[len + is_negative] = n % 10 + '0';
		n = n / 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

/* int	main(void)
{
	int	number;

	number = 0;
	printf("%s\n", ft_itoa(number));
	return (0);
} */
