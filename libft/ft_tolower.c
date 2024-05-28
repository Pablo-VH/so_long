/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:30:32 by pavicent          #+#    #+#             */
/*   Updated: 2024/01/12 14:21:27 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}

/*int	main(void)
{
	int	a;

	a = 'R';
	printf("%c\n", ft_tolower(a));
	return (0);
}*/