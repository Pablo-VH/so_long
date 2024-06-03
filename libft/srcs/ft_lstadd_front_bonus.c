/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:24:33 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/15 12:02:57 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int	main(void)
{
	t_list	*node;
	t_list	*new_node;

	node = ft_lstnew("Nodo existente");
	if (!node)
		return (1);
	new_node = ft_lstnew("Nuevo nodo");
	if (!new_node)
		return (1);
	printf("Contenido antes de agregar nuevo nodo:\n");
    printf("Cabeza: %s\n", (char *)node->content);
    ft_lstadd_front(&node, new_node);
    printf("Contenido después de agregar nuevo nodo:\n");
    printf("Cabeza: %s\n", (char *)node->content);
    printf("Próximo nodo: %s\n", (char *)node->next->content);
	free(node);
	return (0);
}*/
