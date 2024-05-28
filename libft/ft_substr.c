/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:58:29 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/20 13:59:53 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (s[i] == '\0')
		return (ft_strdup(""));
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) <= len)
		sub = (char *)malloc(sizeof(char) * (ft_strlen(&s[start]) + 1));
	else
		sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*int	main(void)
{
	char const		*s;
	unsigned int	start;
	size_t			len;
	char			*sub;

	s = "lorem ipsum dolor sit amet";
	start = 2;
	len = 10;
	sub = ft_substr(s, start, len);
	printf("%s\n", s);
	printf("%s\n", sub);
	free(sub);
	return(0);
}*/
