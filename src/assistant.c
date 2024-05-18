/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assistant.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:08:34 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/13 18:46:02 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize_2(t_node *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	sort_stack(t_node **stack_a, t_node **stack_b)
{
	int	size_a;

	size_a = 0;
	size_a = ft_lstsize_2(*stack_a);
	if (size_a == 2 && ft_check_is_sorted(*stack_a, *stack_b) == 0)
		ft_sa(stack_a);
	else if (size_a == 3)
	{
		ft_sort_three(stack_a);
	}
	else if (size_a == 4)
	{
		ft_sort_four(stack_a, stack_b);
	}
	else if (size_a == 5)
	{
		ft_sort_five(stack_a, stack_b);
	}
	else
	{
		ft_index(stack_a);
		radix(stack_a, stack_b, size_a);
	}
}

void	ft_assistant(char **argv, int argc)
{
	t_node	**stack_a;
	t_node	**stack_b;
	int		i;

	i = 1;
	stack_b = (t_node **)malloc(sizeof(t_node *));
	*stack_b = NULL;
	if (!stack_b)
		return ;
	else if (argc == 2)
		i = 0;
	stack_a = ft_make_stack(argv, i);
	if (ft_check_duplicate_node(*stack_a) == 0)
	{
		free_stack(stack_a, stack_b);
		ft_print_error();
	}
	if (ft_check_is_sorted(*stack_a, *stack_b) == 1)
	{
		free_stack(stack_a, stack_b);
		exit(0);
	}
	sort_stack(stack_a, stack_b);
	free_stack(stack_a, stack_b);
}

int	ft_check_duplicate_node(t_node *stack_a)
{
	t_node	*current;
	t_node	*check;

	current = stack_a;
	while (current != NULL)
	{
		check = current->next;
		while (check != NULL)
		{
			if (current->data == check->data)
			{
				return (0);
			}
			check = check->next;
		}
		current = current->next;
	}
	return (1);
}

void	free_stack(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp;

	while (*stack_a)
	{
		temp = (*stack_a)->next;
		free(*stack_a);
		*stack_a = temp;
	}
	free(stack_a);
	free(stack_b);
}
