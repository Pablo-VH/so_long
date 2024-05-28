/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:56:54 by pavicent          #+#    #+#             */
/*   Updated: 2024/01/18 09:31:13 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
/*#include <stdio.h>
#include <string.h>*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((char *)b + i) = (unsigned char)c;
		i++;
	}
	return ((void *)b);
}

/*int	main(void)
{
	char	*a;
	int	c;
	size_t	len;

	c = 512 + 48;
	len = 1000;
	printf("%d\n", c);
	printf("%d\n", (unsigned char)c);
	printf("Función Pablo: %s\n", (char*)ft_memset(a, c, len));
	printf("Función original: %s\n", (char *)memset(a, c, len));
	return (0);
}*/
