/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:49:40 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/01/24 18:17:27 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*scopy;
	int		i;

	if (!s || !f)
		return (NULL);
	scopy = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!scopy)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		scopy[i] = f(i, s[i]);
		i++;
	}
	scopy[i] = '\0';
	return (scopy);
}
