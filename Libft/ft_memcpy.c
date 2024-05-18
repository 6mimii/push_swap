/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:07:28 by mdoudi-b          #+#    #+#             */
/*   Updated: 2023/12/18 18:50:18 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	i = 0;
	if (!src && !dst)
		return (0);
	while (i < n)
	{
		ptr2[i] = ptr1[i];
		i++;
	}
	return (dst);
}
