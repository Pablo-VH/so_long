/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:13:10 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:11:03 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
//#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int main(void)
{
	t_list *lst = ft_lstnew("first");
	t_list *new = ft_lstnew("second");
	ft_lstadd_back(&lst, new);
	while (lst)
	{
		printf("lst->content = %s\n", lst->content);
		lst = lst->next;
	}
	free(lst);
	free(new);
	return (0);
}*/
