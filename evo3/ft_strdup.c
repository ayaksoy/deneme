/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:31:12 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/12 17:03:27 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)ft_calloc((ft_strlen(s1) + 1), sizeof(char));
	if (s2 == NULL)
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1));
	return (s2);
}
