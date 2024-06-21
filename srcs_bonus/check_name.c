/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_name.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:46:41 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/13 17:46:45 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_name(char *argv, char *end)
{
	int	i;
	int	j;
	int	checker;

	i = 0;
	checker = 1;
	while (argv[i])
	{
		if (argv[i] == end[0])
		{
			j = 0;
			while (end[j] || argv[i + j])
			{
				checker = 0;
				if (argv[i + j] != end[j])
				{
					checker = 1;
					break ;
				}
				j++;
			}
		}
		i++;
	}
	return (checker);
}

int	check_name2(char *argv, char *end)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] != end[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_name3(char *argv, char *end)
{
	int	i;

	i = 0;
	while (end[i])
	{
		if (argv[i] != end[i])
			return (1);
		i++;
	}
	return (0);
}
