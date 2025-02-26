 #include "aux.h"
#include <stdio.h>

char **allocate_map(char *route)
{
    int fd;
    char *line;
    int height;
    char **map;
    int i;

    fd = open(route, O_RDONLY);
    if (fd == -1)
        return (perror("Error al abrir el archivo"), NULL);

    height = files_map(route);
    map = (char **)malloc((height + 1) * sizeof(char *));
    if (!map)
        return (NULL);

    i = 0;
    while ((line = get_next_line(fd)) != NULL)
    {
        map[i] = dup_line(line);
        i++;
        free(line);
    }
    map[i] = NULL;
    close(fd);
    return (map);
}

// int main(void)
// {
//     char **map;
//     int i;

//     map = allocate_map("/home/rcarpio-/Desktop/clones/n_so_long/maps/map1.ber");
//     if (!map)
//     {
//         printf("Error al cargar el mapa.\n");
//         return (1);
//     }

//     i = 0;
//     while (map[i])
//     {
//         printf("%s", map[i]);
//         free(map[i]); // Liberar cada línea después de imprimir
//         i++;
//     }
//     free(map); // Liberar el array de punteros

//     return (0);
// }
