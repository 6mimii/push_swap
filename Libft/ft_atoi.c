/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:10:32 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/01/30 12:22:44 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	is_space(char *str, int *i)
{
	while (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\v'
		|| str[*i] == '\f' || str[*i] == '\r' || str[*i] == ' ')
		(*i)++;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	is_negative;
	int	num;

	i = 0;
	is_negative = 0;
	num = 0;
	is_space((char *)str, &i);
	if (str[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num *= 10;
		num += (str[i] - '0');
		i++;
	}
	if (is_negative)
		num = -num;
	return (num);
}
