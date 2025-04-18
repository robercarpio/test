/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:21:38 by rober             #+#    #+#             */
/*   Updated: 2025/04/17 18:27:28 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int   count_r(t_list *node, int min_index)
{
	int	i;
	if (!node)
		return (0);
	i = 0;
	while (node)
	{
		if(node->index == min_index)
			break;
		i++;
		node = node->next;
	}
	return (i);
}
