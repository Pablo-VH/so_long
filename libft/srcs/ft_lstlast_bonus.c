/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:03:23 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 10:44:33 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("primer nodo");
	node2 = ft_lstnew("segundo nodo");
	node3 = ft_lstnew("ultimo nodo");
	node1->next = node2;
	node2->next = node3; 
	printf("%s\n", (char *)node1->content);
	printf("%s\n", (char *)ft_lstlast(node1)->content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/
