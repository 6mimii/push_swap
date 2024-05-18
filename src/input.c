/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:13:23 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/16 14:20:38 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mult_args(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (ft_verification(argv[i]) == 0)
		{
			ft_print_error();
		}
		i++;
	}
	ft_assistant(argv, argc);
}

void	ft_two_args(char *argv, int argc)
{
	char	**matrix;

	if (argv[0] == '\0')
		ft_print_error();
	if (ft_verification_comas(argv) == 0)
		ft_print_error();
	else
	{
		matrix = ft_split(argv, ' ');
		ft_check_space(argv);
		ft_assistant(matrix, argc);
		free_matrix(matrix);
	}
}
