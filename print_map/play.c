#include "print_map.h"

void	play(char *route)
{
	char	*full_route;
	s_player	player;
	s_map		map;
	s_game	game;
	int		i;
	char	**e_map;
	char	**c_map;
	char **chars_map;
	//comprobar que route termine en .ber
	if(ber_file(route))
	{
		full_route = str_join("./maps/",route);
		//comprobar si el mapa es valido
		if(check_map(full_route))
		{
			init_structs(&map,&player,&game,full_route);
			//comprobar si el mapa es jugable;
			i = 0;
			e_map = allocate_map(full_route);
			c_map = allocate_map(full_route);
			

			are_coins_reachable(c_map, game.player.py, game.player.px, game.map.size_x, game.map.size_y, &i);
			//comprobacion de que la salida y todas las monedas son pillables desde las coordenadas del player
			if (i == game.map.n_collectibles && is_exit_reachable(e_map,game.player.py,game.player.px,game.map.size_x,game.map.size_y))
			{
				//comprobar que el mapa solo tenga una E y una P
				chars_map = allocate_map(full_route);
				if(count_char(chars_map,'P')== 1 && count_char(chars_map,'E')== 1)
				{
					print_map(game);
					mlx_key_hook(game.window, key_hook, &game);
    					mlx_loop(game.mlx);
				}
				else
					printf("Error: Solo pueda haber una P y una E en el mapa");
			}
			else
			{
				printf("fallo de los flood fills\n");
			}
				

			// printf("coins: %d\n",i);
			// printf("game coins: %d\n",game.map.n_collectibles);
		}
		else
		{
			write(1,"Error: Mapa no valido\n",22);
		}
	}
	else
	{
		write(1,"Error: No es un archivo .ber\n",29);
	}
}
//exit