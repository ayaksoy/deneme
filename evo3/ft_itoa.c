/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:07:37 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/13 20:17:25 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizeofnbr(int n)
{
	int	cnt;

	cnt = 0;
	if (n <= 0)
		cnt++;
	while (n)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	nbr;

	nbr = (long int)n;
	i = sizeofnbr(n) - 1;
	str = ft_calloc(sizeof(char), (sizeofnbr(n) + 1));
	if (!str)
		return (0);
	if (nbr == 0)
		str[0] = nbr + 48;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		str[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	return (str);
}
