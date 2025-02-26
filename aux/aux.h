#ifndef AUX_H
# define AUX_H

#include "../so_long.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "../gnl/get_next_line.h"


int files_map(char *route);
int	line_len(char *str);
int	only_chars_allowed(char *str, char *allow);
int	borders_h_checker(char *route);
int	borders_v_checker(char *route);
void consume_remaining(int fd, int *is_rect);
int fill_left(char **map, int y, int x);
int fill_right(char **map, int y, int x);
int fill_up(char **map, int y, int x);
int fill_down(char **map, int y, int x);
int map_height(char **map);
int	fill_cross(char **map, int y, int x);
int	ft_contains(char *str, char c);
char	*dup_line(char *s);
char	**allocate_map(char *route);
int   pos_x(char **map);
int   pos_y(char **map);
int	collectible_count(char **map);
int	str_compare(char *str1, char *str2);
int	ber_file(char *str);
char	*str_join(char *s1, char *s2);
int	count_char(char **map,char c);
void	print_error(char *error);

#endif
