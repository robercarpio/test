#include "aux.h"

int	count_char(char **map,char c)
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
			if (map[y][x] == c)
				i++;
			x++;
		}
		y++;
	}
	return (i);
}