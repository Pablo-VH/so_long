/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:29:38 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:13:17 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next_node = current->next;
		del(current->content);
		free(current);
		current = next_node;
	}
	*lst = NULL;
}

/*static void	ft_del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *lst = ft_lstnew(ft_strdup("first"));
	t_list *new = ft_lstnew(ft_strdup("second"));
	ft_lstadd_back(&lst, new);
		while (lst)
	{
		printf("lst->content = %s\n", lst->content);
		lst = lst->next;
	}
	ft_lstclear(&lst, ft_del);
	printf("Despues de la funcion\n");
	while (lst)
	{
		printf("lst->content = %s\n", lst->content);
		lst = lst->next;
	}
	free(lst);
	free(new);
	return (0);
}*/