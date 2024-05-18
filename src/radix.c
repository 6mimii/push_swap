/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:15:53 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/09 20:48:43 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_node **stack_a, t_node **stack_b, int argc)
{
	int	bits;
	int	i;
	int	j;

	bits = 0;
	i = 0;
	while (argc >> ++bits)
		;
	while (i < argc && !ft_check_is_sorted(*stack_a, NULL))
	{
		j = 0;
		while (j++ < argc && !ft_check_is_sorted(*stack_a, NULL))
		{
			if (*stack_a)
			{
				if ((*stack_a)->index & (1 << i))
					ft_ra(stack_a);
				else
					ft_pb(stack_a, stack_b);
			}
		}
		while (*stack_b)
			ft_pa(stack_a, stack_b);
		i++;
	}
}
