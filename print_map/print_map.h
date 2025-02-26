#ifndef PRINT_MAP_H
# define PRINT_MAP_H

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "../so_long.h"
#include "../gnl/get_next_line.h"
#include "../aux/aux.h"
#include "../minilibx-linux/mlx.h"
#include "../minilibx-linux/mlx_int.h"
#include "../events/events.h"

void	play();
void	init_structs(s_map *map,s_player *player,s_game *game, char  *route);
//void    init_player(s_game *game, char *route);
void	print_chunk(int	x, int y, char chunk, s_game *game);
void	print_map(s_game game);
#endif	