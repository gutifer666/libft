/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:06:12 by frgutier          #+#    #+#             */
/*   Updated: 2022/09/25 10:03:34 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst2 < src2)
	{
		while (len--)
			*dst2++ = *src2++;
	}
	else
	{
		dst2 += len;
		src2 += len;
		while (len--)
			*--dst2 = *--src2;
	}
	return (dst);
}
