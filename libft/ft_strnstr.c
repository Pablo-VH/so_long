/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:28:36 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/27 09:31:54 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
/*#include <string.h>
#include <stdio.h>*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	i = ft_strlen(needle);
	if (haystack == NULL && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && i <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, i)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*s1;
	const char	*s2;
	size_t		n;

	n = 8;
	s1 = "aaabcabcd";
	s2 = "cd";
	printf("La diferencia es = %s\n", ft_strnstr(s1, s2, n));
	//printf("La funcion = %s\n", strnstr(s1, s2, n));
	return (0);
}*/
