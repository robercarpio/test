#include "events.h"


int   can_move(s_game game, int c)
{
      int	x;
	int	y;
	int	b;

	b = 1;
	x = game.player.px;
	y = game.player.py;
      if (c == 119)
		y--;
	else if(c == 115)
		y++;
	else if(c == 97)
		x--;
	else if(c == 100)
		x++;
      if((game.map.alloc[y][x]=='E' && game.map.n_collectibles==game.player.collectibles_taken))
            close_game(&game, "WIN");
	else if(game.map.alloc[y][x] == '1'|| (game.map.alloc[y][x]=='E' && game.map.n_collectibles>game.player.collectibles_taken))
		b = 0;
	return(b);
}

void  move(s_game *game, int keycode)
{
      int   x;
      int   y;
      int   px;
      int   py;

      px = game->player.px;
      py = game->player.py;
      if(can_move(*game,keycode))
      {
            y = py;
            x = px;
            if (keycode == 119)
                  y--;
            else if(keycode == 115)
                  y++;
            else if(keycode == 97)
                  x--;
            else if(keycode == 100)
                 x++;

            if(game->map.alloc[y][x] == 'C')
                  game->player.collectibles_taken +=1;
            game->player.px = x;
            game->player.py = y;
            game->map.alloc[y][x] = 'P';
            game->map.alloc[py][px] = '0';
            print_map(*game);
      }
}
