/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:07:37 by aaksoy            #+#    #+#             */
/*   Updated: 2023/11/27 21:06:01 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int sizeofint(int n)
{
	int count;

	count = 0;
	if(n < 0)
	{
		n = n * -1;
		count++;
	}
	if(n == 0)
		return (1);
	
	while(n > 0)
	{
		n /= 10;
		count++;
	}
	return(count);
}
char *for_max(int n)
{
	char *ret;
	ret = malloc(sizeof(char) * 12);
	if(ret == NULL)
		return (NULL);
	ret = "-2147483648";
	return (ret);
}
char *ft_itoa(int n)
{
	char *ret;
	int len;
	int nll;
	if(n == -2147483648)
		return (for_max(n));
	ret = (char *)malloc(sizeof(char) * (sizeofint(n) + 1));
	if(ret == NULL)
		return (NULL);
	len = sizeofint(n) - 1;
	nll = sizeofint(n);
	if(n < 0)
	{
		ret[0] = '-';
		n = n * -1;
	}
	if(n == 0)
		ret[0] = '0';
	while(n)
	{
		ret[len--] = (n % 10) + '0';
		n = n / 10;
	}
	ret[nll] = '\0';
	return(ret);
}
