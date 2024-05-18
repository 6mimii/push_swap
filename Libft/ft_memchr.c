/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:24:06 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/01/25 20:14:55 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)s;
	while (i < n)
	{
		if (s1[i] == ((unsigned char)c))
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
/* int main()
{
    const char str[] = "Hello, World!";
    char c = '$';
    char *res = ft_memchr(str, c, 100000);

    if (res != NULL)
        printf("'%c' found at position: %ld\n", c, res - str);
    else
        printf("'%c' not found\n", c);

    return 0;
} */