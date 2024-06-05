/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:46:27 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/19 20:42:08 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*static void	ft_strtoupper(void *content)
{
	char	*str;
	int	i;

	i = 0;
	str = (char *)content;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}

static void ft_print_content(void *content)
{
	char *str = (char *)content;
	printf("%s ", str);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	char *str1 = ft_strdup("nodo 1");
	char *str2 = ft_strdup("nodo 2");
	char *str3 = ft_strdup("nodo 3");
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);
	node1->next = node2;
	node2->next = node3;
	ft_lstiter(node1, &ft_strtoupper);
	ft_lstiter(node1, &ft_print_content);
	free(node1);
	free(node2);
	free(node3);
    return (0);
}*/
