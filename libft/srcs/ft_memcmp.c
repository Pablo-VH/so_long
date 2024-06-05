/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:44:47 by pavicent          #+#    #+#             */
/*   Updated: 2024/01/29 10:29:13 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "hola mundo";
	s2 = "hola Mundo";
	n = 6;
	//printf("%d\n", ft_memcmp(s1, s2, n));
	//printf("%d\n", memcmp(s1, s2, n));
	return (0);
}*/
