/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:54:37 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/05/10 17:18:56 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		ft_two_args(argv[1], argc);
	}
	if (argc > 2)
	{
		ft_mult_args(argc, argv);
	}
	return (0);
}
