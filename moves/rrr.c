/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:46:39 by rober             #+#    #+#             */
/*   Updated: 2025/03/23 20:55:09 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*node_a;
	t_list	*node_b;

	if (!stack_a->head || stack_a->head->value == stack_a->tail->value)
		return ;
	node_a = stack_a->tail;
	stack_a->tail = node_a->prev;
	stack_a->tail->next = NULL;
	node_a->prev = NULL;
	node_a->next = stack_a->head;
	stack_a->head->prev = node_a;
	stack_a->head = node_a;
	if (!stack_b->head || stack_b->head->value == stack_b->tail->value)
		return ;
	node_b = stack_b->tail;
	stack_b->tail = node_b->prev;
	stack_b->tail->next = NULL;
	node_b->prev = NULL;
	node_b->next = stack_b->head;
	stack_b->head->prev = node_b;
	stack_b->head = node_b;
	write(1,"rrr\n",4);
}
