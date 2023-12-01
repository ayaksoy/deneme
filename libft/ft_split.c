/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:00:38 by aaksoy            #+#    #+#             */
/*   Updated: 2023/11/26 16:00:51 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
			j++;
		while (s[j] && s[j] == c)
			j++;
		i++;
	}
	return (i);
}
int	len(char *s, char c)
{
	int	i;

	i = 0;
	while(s[i] && s[i] != c)
		i++;
	return(i);
}
char	**ft_split(char *s, char c)
{
	char **ret;
	int i;

	ret = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if(ret == NULL)
		return (NULL);
	i = 0;
	while(*s)
	{
		while(*s == c)
			s++;
		if(*s != c)
			ret[i++] = ft_substr(s, 0, len(s, c));
		while(*s != c)
			s++;
	}
	ret[i] = NULL;
	return (ret);
	
}
