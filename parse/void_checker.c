/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   void_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:23:46 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/05 01:50:52 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	void_checker(char **args)
{
	int		i;
	int		j;
	char	**split;
	int		b;

	i = 0;
	b = 0;
	while (args[i] && b == 0)
	{
		if (only_chars_allowed(args[i], " "))
			b = 1;
		else
		{
			j = 0;
			split = ft_split(args[i],' ');
			while (split[j] && b == 0)
			{
				if(only_chars_allowed(split[j]," ") || split[j][0] == '\0')
					b = 1;
				j++;
			}
			free_split(split);
		}
		i++;
	}
	return (b);
}
