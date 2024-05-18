/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:19:58 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/04/27 17:52:04 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	**ft_make_stack(char **argv, int i)
{
	t_node	**stack_a;
	t_node	*current_node;

	stack_a = (t_node **)malloc(sizeof(t_node *));
	if (!stack_a)
		return (NULL);
	*stack_a = (t_node *)malloc(sizeof(t_node));
	if (!*stack_a)
		return (NULL);
	current_node = *stack_a;
	current_node->data = ft_atol(argv[i++]);
	current_node->next = NULL;
	while (argv[i])
	{
		current_node->next = (t_node *)malloc(sizeof(t_node));
		if (!current_node)
			return (NULL);
		current_node = current_node->next;
		current_node->data = ft_atol(argv[i++]);
		current_node->next = NULL;
	}
	return (stack_a);
}
