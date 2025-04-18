/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:02:55 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/17 17:50:50 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

t_stack	create_stack(void)
{
	t_stack	stack;

	stack.head = NULL;
	stack.size = 0;
	stack.tail = NULL;
	return(stack);
}
