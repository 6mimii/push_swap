/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:34:17 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/13 21:01:30 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "../Libft/libft.h"

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}		t_node;

void	ft_check_limits(int c);
void	ft_mult_args(int argc, char **argv);
int		ft_verification(const char *str);
int		ft_verification_comas(char const *str);
long	ft_atol(const char *str);
void	ft_long_check(long num);
t_node	**ft_make_stack(char **argv, int i);
void	ft_swap(t_node **stack);
void	ft_two_args(char *argv, int argc);
void	ft_rotate(t_node **stack);
void	ft_reverse_rotate(t_node **stack);
void	ft_assistant(char **argv, int argc);
void	ft_push(t_node **src, t_node **dst);
void	ft_sa(t_node **stack);
void	ft_sb(t_node **stack);
void	ft_ss(t_node **stack_a, t_node **stack_b);
void	ft_ra(t_node **stack_a);
void	ft_rb(t_node **stack_a);
void	ft_rr(t_node **stack_a, t_node **stack_b);
void	ft_rra(t_node **stack);
void	ft_rrb(t_node **stack);
void	ft_rrr(t_node **stack, t_node **stack_b);
void	ft_pa(t_node **stack_a, t_node **stack_b);
void	ft_pb(t_node **stack_b, t_node **stack_a);
void	ft_sort_three(t_node **stack_a);
int		ft_check_is_sorted(t_node *stack_a, t_node *stack_b);
int		ft_find_min(t_node *stack_a);
int		ft_find_max(t_node *stack_a);
void	ft_push_min(t_node **stack_a, t_node **stack_b);
void	ft_sort_four(t_node **stack_a, t_node **stack_b);
void	ft_sort_five(t_node **stack_a, t_node **stack_b);
void	radix(t_node **stack_a, t_node **stack_b, int argc);
void	ft_push_swap(t_node **stack_a, t_node **stack_b, int argc);
void	sort_stack(t_node **stack_a, t_node **stack_b);
void	free_stack(t_node **stack_a, t_node **stack_b);
int		ft_check_duplicate_node(t_node *stack_a);
void	ft_print_error(void);
void	ft_index(t_node **stack_a);
int		ft_get_index(t_node *stack_a, int num);
void	ft_check_space(char const *str);
void	ft_ra_sa(t_node **stack_a);
void	free_matrix(char **matrix);

#endif