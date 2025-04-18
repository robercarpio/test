/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:28:35 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/29 20:10:47 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	dup_checker(t_list *node)
{
	int	b;
	
	b = 1;
	while (node && b == 1)
	{
		if (find_dup_value(node))
			b = 0;
		node = node->next;
	}
	return(b);
}
