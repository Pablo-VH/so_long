/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:20:39 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/15 09:43:49 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = (void *)content;
	list->next = NULL;
	return (list);
}

/*int	main(void)
{
	t_list	*new_node;
	int	*rt;

	rt = (int *)malloc(sizeof(int));
	*rt = 12345;
	new_node = ft_lstnew(rt);
	if(new_node)
	{
		printf("contenido del nodo: %d\n",*(int *)new_node->content);
		if(new_node->next)
			printf("Hay un proximo nodo\n");
		else
			printf("No hay proximo nodo\n");
		free(new_node);
	}
	else
		printf("Error\n");
	free(rt);
	return (0);
}*/
