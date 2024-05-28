/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:24:43 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/27 14:27:16 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
//#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*static void	ft_del(void *content)
{
	free(content);
	content = NULL;
}

int main(void)
{
	t_list *lst = ft_lstnew(ft_strdup("first"));
	t_list *node2 = ft_lstnew(ft_strdup("2"));
	t_list *node3 = ft_lstnew(ft_strdup("3"));
	lst->next = node2;
	node2->next = node3;
	printf("%p\n", lst->next->content);
	ft_lstdelone(node2, ft_del);
	*node2 = next;
	printf("lst->next = %p\n", lst->next->content);
	return (0);
}*/