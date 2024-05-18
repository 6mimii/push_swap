/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:48:43 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/09 18:08:44 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_node **src, t_node **dst)
{
	t_node	*tmp;
	t_node	*next_node;

	if ((*src) == NULL)
	{
		return ;
	}
	tmp = *src;
	next_node = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
	*src = next_node;
}

void	ft_pa(t_node **stack_a, t_node **stack_b)
{
	ft_push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	ft_pb(t_node **stack_a, t_node **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_printf("pb\n");
}
