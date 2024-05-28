/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:50:46 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:08:15 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
/*#include <stdio.h>*/

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int c = 65;
	printf("c = %d\n", c);
	printf("ft_isalpha(c) = %d\n", ft_isalpha(c));
	printf("isalpha(c) = %d\n", isalpha(c));
	return (0);
}*/