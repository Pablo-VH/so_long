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

#include "so_long.h"

int	main(int argc, char **argv)
{
	//void	*mlx;
	//void	*mlx_win;
	t_map	map;

	if (argc != 2)
	{
		return (1);
	}
	init_map(argv[1], &map);
	/*
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	mlx_pixel_put(mlx, mlx_win, 10, 10, 0xFFFFFF);
	mlx_hook(mlx_win, 17, 1L >> 0, destroy_win, argv[1]);
	mlx_loop(mlx);*/
	ft_putstr_fd("hola", 1);
	return (0);
}

/*void	destroy_win(int keycode)
{

}*/
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
