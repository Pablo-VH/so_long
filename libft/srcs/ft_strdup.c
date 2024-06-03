/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:23:03 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:15:28 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>*/

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*duplicate;

	len = ft_strlen((char *)s1) + 1;
	duplicate = (char *)malloc(len);
	if (duplicate == NULL)
		return (NULL);
	ft_strlcpy(duplicate, s1, len);
	return ((char *)duplicate);
}

/*int main(void)
{
	char *s1 = "Hello, world!";
	char *s2 = ft_strdup(s1);
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	free(s2);
	return (0);
}*/