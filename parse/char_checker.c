/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:06:30 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/05 03:13:34 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int		char_checker(char **args)
{
	int		i;
	int		j;
	char	**split;
	int		b;

	i = 0;
	b = 1;
	while (args[i] && b == 1)
	{
		j = 0;
		split = ft_split(args[i],' ');
		while (split[j] && b == 1)
		{
			if(!only_chars_allowed(split[j],"0123456789+- "))
				b = 0;
			j++;
		}
		free_split(split);
		i++;
	}
	return (b);
}
