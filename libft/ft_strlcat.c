/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:09:33 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/27 10:34:50 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}
/*int	main(void)
{
	const char	*src;
	char		dst[14] = "aaa";
	size_t		dstsize;

	src = "lore";
	dstsize = -1;
	printf("%zu\n", ft_strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	//printf("%zu\n", strlcat(dst, src, dstsize));
	//printf("%s\n", dst);
	return (0);
}*/
