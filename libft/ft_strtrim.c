/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:48:24 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/01 10:52:46 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	len = ft_strlen(&s1[i]);
	if (len)
		while (s1[i + len - 1] && ft_strchr(set, s1[i + len - 1]) != NULL)
			len--;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, &s1[i], len);
	str[len] = '\0';
	return (str);
}

/*int	main(void)
{
	char const *s1;
	char const *set;
	char	*str;

	s1 = "Hola espana";
	set = "an";
	str = ft_strtrim(s1, set);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
