/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:52:14 by rober             #+#    #+#             */
/*   Updated: 2025/04/10 16:47:47 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void  ss(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*node_a;
	t_list	*node_b;

	if (!stack_a->head || stack_a->head->value == stack_a->tail->value)
		return ;
	node_a = stack_a->head;
	node_a->next = stack_a->head->next->next;
	if (stack_a->head->next->next)
		stack_a->head->next->next->prev = node_a;
	stack_a->head->next->prev = NULL;
	stack_a->head->next->next = node_a;
	stack_a->head = stack_a->head->next;
	node_a->prev = stack_a->head->next;
	if (!stack_b->head || stack_b->head->value == stack_b->tail->value)
		return ;
	node_b = stack_b->head;
	node_b->next = stack_b->head->next->next;
	if (stack_b->head->next->next)
		stack_b->head->next->next->prev = node_b;
	stack_b->head->next->prev = NULL;
	stack_b->head->next->next = node_b;
	stack_b->head = stack_b->head->next;
	node_b->prev = stack_b->head->next;
	write(1,"ss\n",3);
}
