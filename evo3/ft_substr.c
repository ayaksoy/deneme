/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:53:18 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/12 17:31:17 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		sub = malloc (1 * sizeof(char));
	else if ((ft_strlen(s) - start) > len)
		sub = malloc ((len + 1) * sizeof (char));
	else
		sub = malloc ((ft_strlen (s) - start + 1) * sizeof (char));
	if (!sub)
		return (0);
	i = 0;
	while ((size_t)start < ft_strlen(s) && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
