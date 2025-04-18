/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:29:45 by rober             #+#    #+#             */
/*   Updated: 2025/04/18 17:59:12 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

int	*args_to_array(char **args)
{
	int		len;
	int		*arr;
	int		i;
	int		j;
	int		k;
	char	**split;

	len = index_counter(args);
	arr = malloc(len * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	k = 0;
	while (args[i])
	{
		split = ft_split(args[i], ' ');
		if (!split)
			return (NULL);
		j = 0;
		while (split[j])
		{
			arr[k] = ft_atoi(split[j]);
			k++;
			j++;
		}
		free_split(split);
		i++;
	}
	return (arr);
}

// int *args_to_array(char **args)
// {
//     int len;
//     int *arr;
//     int i;
//     int j;
//     char **split;

//     len = index_counter(args);
//     arr = malloc(len * sizeof(int));
//     i = 0;
//     while (args[i])
//     {
//         j = 0;
//         split = ft_split(args[i], ' ');
//         while (split[j])
//         {
//             arr[i] = ft_atoi(split[j]);
//             j++;
//         }
//         free_split(split);
//         i++;
//     }
//     return (arr);
// }
