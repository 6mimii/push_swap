/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:04:32 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/09 17:55:42 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_index(t_node *stack_a, int num)
{
	int		index;
	t_node	*current;

	index = 1;
	current = stack_a;
	while (current)
	{
		if (current->data < num)
			index++;
		current = current->next;
	}
	return (index);
}

void	ft_index(t_node **stack_a)
{
	t_node	*current;

	current = *stack_a;
	while (current)
	{
		current->index = ft_get_index(*stack_a, current->data);
		current = current->next;
	}
}
