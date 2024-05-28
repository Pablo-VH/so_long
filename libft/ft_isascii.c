/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:46:18 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:06:41 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
/*#include <stdio.h>*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int c = 128;
	printf("c = %d\n", c);
	printf("ft_isascii(c) = %d\n", ft_isascii(c));
	printf("isascii(c) = %d\n", isascii(c));
	return (0);
}*/