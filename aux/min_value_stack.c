/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_value_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:19:01 by rober             #+#    #+#             */
/*   Updated: 2025/03/26 18:19:59 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"
#include <unistd.h>

int	min_value_stack(t_stack stack)
{
	t_list	*node;
	int		val;

	node = stack.head;
	val = node->value;
	while (node)
	{
		if (val > node->value)
		{
			val = node->value;
			write(1, "<\n", 2);
		}
		node = node->next;
	}
	return (val);
}
