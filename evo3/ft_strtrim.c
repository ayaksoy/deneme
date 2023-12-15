/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:09:25 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/12 17:31:21 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_f(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	front;
	int	back;

	if (!s1)
		return (NULL);
	front = 0;
	back = ft_strlen(s1) - 1;
	while (s1[front] && check_f(s1[front], set))
		front++;
	while (back >= front && check_f(s1[back], set))
		back--;
	return (ft_substr(s1, front, (back - front + 1)));
}
