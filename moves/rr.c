/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:08:26 by rober             #+#    #+#             */
/*   Updated: 2025/03/23 20:35:30 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*node_a;
	t_list	*node_b;

	if (!stack_a->head || stack_a->head->value == stack_a->tail->value)
		return ;
	node_a = stack_a->head;
	stack_a->head = node_a->next;
	stack_a->head->prev = NULL;
	stack_a->tail->next = node_a;
	node_a->prev = stack_a->tail;
	node_a->next = NULL;
	stack_a->tail = node_a;
	if(!stack_b->head || stack_b->head->value == stack_b->tail->value)
		return ;
	node_b = stack_b->head;
	stack_b->head = node_b->next;
	stack_b->head->prev = NULL;
	stack_b->tail->next = node_b;
	node_b->prev = stack_b->tail;
	node_b->next = NULL;
	stack_b->tail = node_b;
	write(1,"rr\n",3);
}
