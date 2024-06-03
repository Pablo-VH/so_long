/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:07:16 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:07:15 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int c = 32;
	printf("c = %d\n", c);
	printf("ft_isprint(c) = %d\n", ft_isprint(c));
	printf("isprint(c) = %d\n", isprint(c));
	return (0);
}*/