/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:20:01 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/01/22 18:41:35 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	if (!src && !dst)
		return (NULL);
	if (ptr2 < ptr1)
	{
		while (len--)
		{
			*ptr2++ = *ptr1++;
		}
	}
	else
	{
		ptr1 = ptr1 + len;
		ptr2 = ptr2 + len;
		while (len--)
			*--ptr2 = *--ptr1;
	}
	return (dst);
}
