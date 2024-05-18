/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:24:33 by mdoudi-b          #+#    #+#             */
/*   Updated: 2023/12/05 13:44:29 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	p;

	p = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (p);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (p);
}

/* int	main(void)
{
	char		dst[10];
	const char	*src;
	size_t		dstsize;
	size_t		result;

	src = "Hello, World!";
	dstsize = sizeof(dst);
	result = ft_strlcpy(dst, src, dstsize);
	printf("Copied string: %s\n", dst);
	printf("Length of source string: %zu\n", result);
	return (0);
} */
