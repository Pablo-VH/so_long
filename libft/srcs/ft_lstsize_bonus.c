/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:24:27 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:31:25 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	cont;

	cont = 0;
	while (lst)
	{
		cont++;
		lst = lst->next;
	}
	return (cont);
}

/*int	main(void)
{
	t_list	*node1 = ft_lstnew("Nodo 1");
	t_list	*node2 = ft_lstnew("Nodo 2");
	t_list	*node3 = ft_lstnew("Nodo 3");
	node1->next = node2;
	node2->next = node3;
	printf("Tamaño de la lista %d\n", ft_lstsize(node1));
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/
