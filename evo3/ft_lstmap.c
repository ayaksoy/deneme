/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:02:08 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/14 20:46:03 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *f(void *a)
{
	int i = 0;
	char *b =(char *)a; 
	while(b[i])
		b[i++] += 2;
	return(a);
}
void del(void *a)
{
	free(a);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_lst = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
int main()
{
	t_list *list = ft_lstnew(ft_strdup("aaaa"));
	list->next = ft_lstnew(ft_strdup("bbb"));

	ft_lstmap(list, f, del);
	
	printf("%s",(char *)list->next->content);
	ft_lstclear(&list, del);
	
	 
}