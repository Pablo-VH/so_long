/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:54:54 by pavicent          #+#    #+#             */
/*   Updated: 2024/01/24 12:01:03 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (!n || dst == src)
		return (dst);
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}

/*int	main(void)
{
	char	*src;
	char	dst[11];
	size_t	n;
	
	src = "Hello World";
	n = 11;
	printf("%s\n", ft_memcpy(dst, src, n));
	//printf("%s\n", memcpy(dst, src, n));
	return (0);
}*/
