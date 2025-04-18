/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:44:40 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/17 16:57:21 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	sort_checker(t_list *node)
{
	int	b;
	int	val;

	val = node->value;
	node = node->next;
	b = 0;
	while (node && b == 0)
	{
		if(val > node->value)
			b = 1;
		val = node->value;
		node = node->next;
	}
	return(b);
}
