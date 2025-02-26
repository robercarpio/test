#include "process_map.h"
#include <stdio.h>

int	is_exit_reachable(char **grid, int y, int x, int width, int height)
{
	if (x < 0 || y < 0 || x >= width || y >= height
		|| grid[y][x] == '1')
		return (0);
	if (grid[y][x] == 'E')
		return (1);
	if (grid[y][x] == 'V')
		return (0);
	grid[y][x] = 'V';
	return (is_exit_reachable(grid, y, x + 1, width, height)
	|| is_exit_reachable(grid, y, x - 1, width, height)
	|| is_exit_reachable(grid, y + 1, x, width, height)
	|| is_exit_reachable(grid, y - 1, x, width, height));
}

int	are_coins_reachable(char **grid, int y, int x, int width, int height, int *i)
{
	if (x < 0 || y < 0 || x >= width || y >= height
		|| grid[y][x] == '1')
		return (0);
	if (grid[y][x] == 'C')
		(*i)++;
	if (grid[y][x] == 'V')
		return (0);
	grid[y][x] = 'V';
	return (are_coins_reachable(grid, y, x + 1, width, height,i)
	|| are_coins_reachable(grid, y, x - 1, width, height,i)
	|| are_coins_reachable(grid, y + 1, x, width, height,i)
	|| are_coins_reachable(grid, y - 1, x, width, height,i));
}

// int	main(void)
// {
// 	char	**map = allocate_map("/home/rcarpio-/Desktop/clones/n_so_long/maps/map1.ber");
// 	printf("%d\n",is_exit_reachable(map,1,3,line_len(map[0]),map_height(map)));
// 	return(1);
// }