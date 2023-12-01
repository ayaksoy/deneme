/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:40:07 by aaksoy            #+#    #+#             */
/*   Updated: 2023/11/26 16:01:39 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	const char	*src2;

	src2 = (const char *)src;
	dst2 = (char *)dst;
	if (dst2 == src2)
	{
		return (dst);
	}
	if (dst2 < src2 || dst2 >= src2 + len)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (len > 0)
	{
		dst2[len - 1] = src2[len - 1];
		len--;
	}
	return (dst);
}
