/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:04:57 by pavicent          #+#    #+#             */
/*   Updated: 2024/01/24 11:20:40 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*s;
	int			c;
	size_t		n;

	s = "Hola Mundo";
	c = 'o';
	n = 2;
	printf("%p\n", ft_memchr(s, c, n));
	printf("Original %p\n",memchr(s, c, n));
	return (0);
}*/
