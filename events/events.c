#include "events.h"

int key_hook(int keycode, s_game *game)
{
    if (keycode == 119 || keycode == 97 || keycode == 115 || keycode == 100)
    {
	game->player.moves++;
	//   printf("Movimientos: %d\n", game->player.moves);
	//printf("can_move: %d\n", can_move(*game,keycode));
	move(game, keycode);
    
    }
    else if(keycode == 65307)
    {
        mlx_destroy_window(game->mlx,game->window);
        close_game(game,"CLOSED");
    }
    return (0);
}
void    close_game(s_game *game, char *error)
{
    print_error(error);
    //free(game->map.alloc);
    mlx_destroy_image(game->mlx,game->character);
    mlx_destroy_image(game->mlx,game->exit);
    mlx_destroy_image(game->mlx,game->collectible);
    mlx_destroy_image(game->mlx,game->floor);
    mlx_destroy_image(game->mlx,game->wall);
    free(game->mlx);
    free_map(game->map.alloc);
    exit(-1);
}
void    free_map(char **map)
{
    int	i;

    i = 0;
    while(map[i])
    {
	free(map[i]);
	i++;
    }
    free(map);
}