/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:35:51 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/07 15:38:32 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node **stack)
{
	int	temp_node;

	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	temp_node = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = temp_node;
}

void	ft_sa(t_node **stack)
{
	ft_swap(stack);
	write(1, "sa\n", 3);
}

void	ft_sb(t_node **stack_b)
{
	ft_swap(stack_b);
	ft_printf("sb\n");
}

void	ft_ss(t_node **stack_a, t_node **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_printf("ss\n");
}
