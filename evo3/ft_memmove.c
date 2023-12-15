/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:40:07 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/13 20:19:05 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	if (dst2 == src2)
		return (dst);
	if (dst2 > src2)
	{
		while (len > 0)
		{
			dst2[len - 1] = src2[len - 1];
			len--;
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
//ABCDEF

//ABCDCF
//  ADCF