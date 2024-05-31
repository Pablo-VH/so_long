/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:18:23 by pavicent          #+#    #+#             */
/*   Updated: 2024/05/13 17:18:30 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	main(int argc, char **argv)
{
	void	*mlx;
	void	*mlx_win;

	if (argc != 2)
	{
		return (1);
	}
	init_map(argv[1]);
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	mlx_pixel_put(mlx, mlx_win, 10, 10, 0xFFFFFF);
	mlx_loop(mlx);
	return (0);
}
/*int	main(int argc, char **argv)
{
	char	**map;

	if (argc != 2)
		return (1);
	printf("%d\n", check_name(argv[1], ".ber"));
	printf("%s\n", argv[1]);
	map = check_n_read(argv[1]);
	//printf("antes printf");
	if (map)
	{
		for (int i = 0; map[i] != NULL; i++){
			printf("%d: %s", i, map[i]);
	}
	}
	
	return (0);
}*/
