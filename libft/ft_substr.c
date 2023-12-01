/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:53:18 by aaksoy            #+#    #+#             */
/*   Updated: 2023/11/19 18:40:11 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	index;
	size_t	index2;

	index = 0;
	index2 = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	while (index < len && s[index + start] != '\0')
		index++;
	dest = (char *)malloc((sizeof(char) * index) + 1);
	if (dest == NULL)
		return (NULL);
	index = 0;
	while (s[index2] != '\0')
	{
		if (index2 >= start && index < len)
			dest[index++] = s[start++];
		index2++;
	}
	dest[index] = '\0';
	return (dest);
}
