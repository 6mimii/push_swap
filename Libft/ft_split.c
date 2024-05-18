/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:00:28 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/04/27 13:38:07 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int	ft_malloc_check(char **array, int j)
{
	if (!array[j])
	{
		while (j >= 0)
			free(array[j--]);
		free(array);
		return (0);
	}
	return (1);
} */

int	ft_countwords(const char *s1, char set)
{
	int	count;

	count = 0;
	while (*s1)
	{
		if (*s1 != set)
		{
			count++;
			while (*s1 != 0 && *s1 != set)
				s1++;
		}
		else
			s1++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		start;
	int		i;
	int		j;

	i = 0;
	j = 0;
	start = -1;
	array = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (array == 0 || !s)
		return (free(array), NULL);
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && start != -1)
		{
			array[j] = ft_substr(s, start, (i - start));
			start = -1;
			j++;
		}
		i++;
	}
	return (array[j] = 0, array);
}

/* int	main(void) // MAIN para ft_countwords
{
	char	*s1 = "2 3 4 5 6";
	char set = ' ';
	int i;
	char **str;

	i = 0;
	str = ft_split(s1, set);
	while (i < ft_countwords(s1, set))
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
} */
