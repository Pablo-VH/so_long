/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:58:52 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:31:07 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*buffer;

	new_list = NULL;
	if (lst || f || del)
	{
		while (lst)
		{
			buffer = (f(lst->content));
			new_node = ft_lstnew(buffer);
			if (!new_node)
			{
				del(buffer);
				ft_lstclear(&new_list, del);
				return (NULL);
			}
			ft_lstadd_back(&new_list, new_node);
			lst = lst->next;
		}
	}
	else
		return (NULL);
	return (new_list);
}

/*void	*add_one(void *content)
{
	int	*num = (int *)content;
	int	*new_num;

	new_num = (int *)malloc(sizeof(int));
	if (!new_num)
		return (NULL);
	*new_num = *num + 1;
	return (new_num);
}

void	print_content(void *content)
{
	int	*num = (int *)content;
	printf("%d ", *num);
}

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_list;

	int	*num1 = (int *)malloc(sizeof(int));
	int	*num2 = (int *)malloc(sizeof(int));
	int	*num3 = (int *)malloc(sizeof(int));

	if (!num1 || !num2 || !num3)
		return (1);
	*num1 = 1;
	*num2 = 2;
	*num3 = 3;
	node1 = ft_lstnew(num1);
	node2 = ft_lstnew(num2);
	node3 = ft_lstnew(num3);
	node1->next = node2;
	node2->next = node3;
	new_list = ft_lstmap(node1, &add_one, &del_content);
	if (new_list)
	{
		ft_lstiter(new_list, &print_content);
		ft_lstclear(&new_list, &del_content);
	}
	else
		printf("Error\n");
	ft_lstclear(&node1, &del_content);
	return (0);
}*/
