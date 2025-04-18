/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_counter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:47:53 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/18 17:13:05 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"


int	index_counter(char **args)
{
	int		count;
	int		i;
	int		j;
	char	**split;

	i = 0;
	count = 0;
	while (args[i])
	{
		j = 0;
		split = ft_split(args[i],' ');
		while (split[j])
		{
			count++;
			j++;
		}
		i++;
	}
	free_split(split);
	return (count);
}

