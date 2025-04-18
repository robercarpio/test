/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:44:10 by rober             #+#    #+#             */
/*   Updated: 2025/03/23 20:45:25 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	rrb(t_stack *stack_b)
{
	t_list	*first;	
	t_list	*last;
	
	if (!stack_b->head || stack_b->head->value == stack_b->tail->value)
		return ;
	first = stack_b->head;
	last = stack_b->tail;
	stack_b->tail = last->prev;
	stack_b->tail->next = NULL;
	last->prev = NULL;
	last->next = first;
	stack_b->head->prev = last;
	stack_b->head = last;
	write(1,"rrb\n",4);
}