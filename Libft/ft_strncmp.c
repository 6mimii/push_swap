/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:57:01 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/01/22 15:30:01 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
		{
			return (-1);
		}
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	int	result;
	char s1;
	char s2;
	
	char s1[] = "fili";
	char s2[] = "filo";
	result = ft_strncmp(s1, s2, 4);
	if (result == 0)
	{
		printf("Las cadenas son iguales\n");
	}
	else if (result < 0)
	{
		printf("s1 es menor que s2\n");
	}
	else
	{
		printf("s1 es mayor que s2\n");
	}
	return (0);
} */
