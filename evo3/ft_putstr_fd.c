/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:48:04 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/13 20:21:45 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &s[i], sizeof(s[i]));
			i++;
		}
	}
}

int main()
{
	int fd = open("asd.txt", O_WRONLY);
	ft_putstr_fd("ahmet", fd);
	close(fd);
}