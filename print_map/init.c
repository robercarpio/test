#include "print_map.h"

void	init_structs(s_map *map,s_player *player,s_game *game, char *route)
{
	char    **a_map;

	a_map= allocate_map(route);
	
	player->px = pos_x(a_map);
	player->py = pos_y(a_map);
	player->moves = 0;
	player->collectibles_taken = 0;
	map->n_collectibles = collectible_count(a_map);
	map->size_x = line_len(a_map[0]);
	map->size_y = map_height(a_map);
	map->player = *player;
	map->alloc = a_map;
	game->mlx = mlx_init();
	game->player = *player;
	game->map = *map;
	game->pixels = 50;
	game->floor = mlx_xpm_file_to_image(game->mlx,"./textures/floor.xpm",&game->pixels,&game->pixels);
	game->wall = mlx_xpm_file_to_image(game->mlx,"./textures/wall.xpm",&game->pixels,&game->pixels);
	game->collectible = mlx_xpm_file_to_image(game->mlx,"./textures/coin.xpm",&game->pixels,&game->pixels);
	game->character = mlx_xpm_file_to_image(game->mlx,"./textures/character.xpm",&game->pixels,&game->pixels);
	game->exit = mlx_xpm_file_to_image(game->mlx,"./textures/exit.xpm",&game->pixels,&game->pixels);
	game->window = mlx_new_window(game->mlx,(map->size_x * 50),(map->size_y * 50),"so_long");
}

// void    init_player(s_player *player, char *route)
// {
//     char    **a_map;

//     a_map = allocate_map(route);
//     player->px = pos_x(a_map);
//     player->py = pos_y(a_map);
//     player->moves = 0;
//     player->collectibles_taken = 0;
// }
