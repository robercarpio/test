/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:10:59 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/02/26 19:13:37 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <X11/Xlib.h>
#include "./aux/aux.h"
#include "./process_map/process_map.h"
#include "./minilibx-linux/mlx.h"
#include "./minilibx-linux/mlx_int.h"
#include "gnl/get_next_line.h"

typedef struct s_player {
	int	py;
	int	px;
	int	moves;
	int	collectibles_taken;
} s_player;

typedef struct s_map {
	int	n_collectibles;
	int	size_x;
	int	size_y;
	int	px_exit;
	int	py_exit;
	s_player player;
	char	**alloc;
} s_map;

typedef struct s_game {
	void	*window;
	void	*mlx;
	void	*wall;
	void	*floor;
	void	*exit;
	void	*collectible;
	void	*character;
	s_player	player;
	s_map	map;
	int	pixels;
} s_game;

#endif
