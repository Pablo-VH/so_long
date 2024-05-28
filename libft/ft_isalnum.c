/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:39:14 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:09:09 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
/*#include <stdio.h>*/

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int c = 48;
	printf("c = %d\n", c);
	printf("ft_isalnum(c) = %d\n", ft_isalnum(c));
	printf("isalnum(c) = %d\n", isalnum(c));
	return (0);
}*/