/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:04:41 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:06:59 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
/*#include <stdio.h>*/

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int c = 48;
	printf("c = %d\n", c);
	printf("ft_isdigit(c) = %d\n", ft_isdigit(c));
	printf("isdigit(c) = %d\n", isdigit(c));
	return (0);
}*/