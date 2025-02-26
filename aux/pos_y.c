#include "aux.h"

int   pos_y(char **map)
{
    int   x;
    int   y;

    y = 0;
    while (y < map_height(map))
    {
        x = 0;
        while (x < line_len(map[y]))
        {
            if (map[y][x] == 'P')
                return (y);
            x++;
        }
        y++;
    }
    return (-1);
}
