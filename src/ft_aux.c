/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:14:43 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/13 21:06:18 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_space(char *str, int *i)
{
	while (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\v'
		|| str[*i] == '\f' || str[*i] == '\r' || str[*i] == ' ')
		(*i)++;
}

long	ft_atol(const char *str)
{
	int		i;
	int		is_negative;
	long	num;

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
	ft_long_check(num);
	return (num);
}

void	ft_long_check(long num)
{
	if (num > 2147483647 || num < -2147483648)
	{
		ft_print_error();
	}
}

void	ft_print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
