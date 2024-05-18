/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:23:43 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/09 18:04:50 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_node *stack_a)
{
	int		min;
	t_node	*temp;

	min = stack_a->data;
	temp = stack_a;
	while (temp != NULL)
	{
		if (temp->data < min)
		{
			min = temp->data;
		}
		temp = temp->next;
	}
	return (min);
}

int	ft_find_max(t_node *stack_a)
{
	int		max;
	t_node	*temp;

	max = stack_a->data;
	temp = stack_a;
	while (temp != NULL)
	{
		if (temp->data < max)
		{
			max = temp->data;
		}
		temp = temp->next;
	}
	return (max);
}

void	ft_push_min(t_node **stack_a, t_node **stack_b)
{
	t_node	*current;

	current = *stack_a;
	while (1)
	{
		if ((*stack_a)->data == ft_find_min(*stack_a))
		{
			ft_pb(stack_a, stack_b);
			break ;
		}
		ft_rra(stack_a);
	}
}
