#include "so_long.h"

void init_mlx(t_map *map)
{
	map->mlx = mlx_init();
	map->mlx_win = mlx_new_window(map->mlx, 1920, 1080, "So_long");
	//ft_bzero(map->images[PLAYER], sizeof(t_data *));
	map->images[PLAYER] = ft_calloc(1, sizeof(t_data));
	//mlx_string_put(map->mlx, map->mlx_win, 200, 200, 0xFF0000, "Daniel");
	//mlx_hook(mlx_win, 17, 1L >> 0, destroy_win, argv[1]);
	map->images[PLAYER]->img = mlx_xpm_file_to_image(map->mlx, "assets/player64.xpm", &map->images[PLAYER]->width, &map->images[PLAYER]->height);
	printf("Error");	
	mlx_put_image_to_window(map->mlx, map->mlx_win, map->images[PLAYER]->img, 50, 50);
	mlx_loop(map->mlx);
}