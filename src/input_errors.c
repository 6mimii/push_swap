/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:52:15 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/15 20:41:54 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_verification(char const *str)
{
	int	i;

	i = 0;
	if (str[0] == '-')
		i++;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9')
				&& (str[i + 1] != '\0'))
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_verification_comas(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || str[i] == '-')
		{
			if (str[i] == '-')
			{
				if (str[i - 1] >= '0' && str[i - 1] <= '9')
					return (0);
				if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
					return (0);
			}
			i++;
		}
		else
			return (0);
	}
	return (1);
}

void	ft_check_limits(int c)
{
	if (c < -2147483648 || c > 2147483647)
		ft_print_error();
}

void	ft_check_space(char const *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '\0')
		ft_print_error();
}
