#include "so_long.h"
#include <stdio.h>
#include "./print_map/print_map.h"
#include "./events/events.h"

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

    // s_map   map;
    // s_player    player;
    // s_game  game;

    // print_map(game);
    // mlx_key_hook(game.window, key_hook, &game);
    // mlx_loop(game.mlx);
    
    if(argc == 2)
        play(argv[1]);
    else
        write(1,"Error: ./so_long map.ber\n",24);
    // check_map("./maps/map1.ber");
     return(0);
}

//guardar las coordenadas de la E para poder pintarla despues de pasar por encima de ella y que se mantega

