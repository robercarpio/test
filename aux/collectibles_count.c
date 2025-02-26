#include "aux.h"

int	collectible_count(char **map)
{
	int   x;
	int   y;
	int	i;

	i = 0;
	y = 0;
	while (y < map_height(map))
	{
		x = 0;
		while (x < line_len(map[y]))
		{
			if (map[y][x] == 'C')
				i++;
			x++;
		}
		y++;
	}
	return (i);
}