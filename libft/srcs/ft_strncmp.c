/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:02:08 by pavicent          #+#    #+#             */
/*   Updated: 2024/01/30 10:49:35 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	size_t			j;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i] && str1[i] != '\0') && i < n)
		i++;
	if (i == n)
		i--;
	j = str1[i] - str2[i];
	return (j);
}

/*int	main(void)
{
	const char	*s1;
	const char	*s2;
	size_t		n;

	n = 9;
	s1 = "Holz mundo";
	s2 = "HolA gente";
	printf("La diferencia es = %d\n", ft_strncmp(s1, s2, n));
	printf("La funcion = %d\n", strncmp(s1, s2, n));
	return (0);
}*/
