/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:36:18 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/12 17:31:24 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = ft_strlen(s);
	p = (char *)s;
	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (p[i] == (char)c)
			return (&p[i]);
		i--;
	}
	return (NULL);
}
