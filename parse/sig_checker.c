/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:35:48 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/05 01:58:18 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

// int	sig_checker(char **args)
// {
// 	int		i;
// 	int		j;
// 	char	**split;
// 	int		b;
// 	int		count;
	
// 	b = 1;
// 	i = 0;
// 	while (args[i] && b == 1)
// 	{
// 		j = 0;
// 		split = ft_split(args[i],' ');
// 		if (!split)
// 			return (0);
// 		while (split[j] && b == 1)
// 		{
// 			count = sig_count(split[j]);
// 			if (!((count == 1 && (split[i][0] == '-' || split[i][0] == '+') && (split[i][1] >= 48
// 			&& split[i][1] <= 57)) || (count == 0 && (split[i][0] >= 48
// 			&& split[i][0] <= 57))))
// 			{
// 				b = 0;	
// 			}
// 			j++;
// 		}
// 		free_split(split);
// 		i++;
// 	}
// 	return (b);
// }
#include <stdio.h>

int	sig_checker(char **args)
{
	int		i;
	int		j;
	char	**split;
	int		b;
	int		count;
	
	b = 1;
	i = 0;
	while (args[i] && b == 1)
	{
		split = ft_split(args[i], ' ');
		if (!split)
			return (0);

		j = 0;
		while (split[j] && b == 1)
		{

			count = sig_count(split[j]);
			if (!split[j][0])
				b = 0;
			else if (!((count == 1 && (split[j][0] == '-' || split[j][0] == '+') && split[j][1] 
			&& (split[j][1] >= '0' && split[j][1] <= '9')) || (count == 0 && (split[j][0] >= '0'
			&& split[j][0] <= '9'))))
			{
				b = 0;
			}
			j++;
		}

		free_split(split);
		i++;
	}
	return (b);
}
