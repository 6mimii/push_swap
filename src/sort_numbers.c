/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:55:28 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/09 20:52:44 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_node **stack_a)
{
	if (((*stack_a)->data > (*stack_a)->next->data)
		&& ((*stack_a)->data < (*stack_a)->next->next->data)
		&& (!ft_check_is_sorted(*stack_a, NULL)))
		ft_sa(stack_a);
	else if (((*stack_a)->data > (*stack_a)->next->data)
		&& ((*stack_a)->next->data < (*stack_a)->next->next->data)
		&& (!ft_check_is_sorted(*stack_a, NULL)))
		ft_ra(stack_a);
	else if (((*stack_a)->data > (*stack_a)->next->data)
		&& ((*stack_a)->next->data > (*stack_a)->next->next->data)
		&& (!ft_check_is_sorted(*stack_a, NULL)))
		ft_ra_sa(stack_a);
	else if (((*stack_a)->data < (*stack_a)->next->data)
		&& ((*stack_a)->data > (*stack_a)->next->next->data)
		&& (!ft_check_is_sorted(*stack_a, NULL)))
		ft_rra(stack_a);
	else if (((*stack_a)->data < (*stack_a)->next->data)
		&& ((*stack_a)->data < (*stack_a)->next->next->data)
		&& (!ft_check_is_sorted(*stack_a, NULL)))
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
}

void	ft_sort_four(t_node **stack_a, t_node **stack_b)
{
	ft_push_min(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
}

void	ft_sort_five(t_node **stack_a, t_node **stack_b)
{
	ft_push_min(stack_a, stack_b);
	ft_push_min(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

int	ft_check_is_sorted(t_node *stack_a, t_node *stack_b)
{
	if (stack_b != NULL)
		return (0);
	while (stack_a->next)
	{
		if (stack_a->data > stack_a->next->data)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

void	ft_ra_sa(t_node **stack_a)
{
	ft_ra(stack_a);
	ft_sa(stack_a);
}
