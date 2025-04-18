/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:46:50 by rober             #+#    #+#             */
/*   Updated: 2025/04/10 16:47:15 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void  pa(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*first_b;

	if (stack_b->size == 0)
		return ;
	first_b = stack_b->head;
	stack_b->head = first_b->next;
	if (stack_b->head != NULL)
		stack_b->head->prev = NULL;
	else
		stack_b->tail = NULL;
	first_b->next = stack_a->head;
	if (stack_a->head != NULL)
		stack_a->head->prev = first_b;
	else
		stack_a->tail = first_b;
	stack_a->head = first_b;
	stack_a->head->prev = NULL;
	stack_a->size++;
	stack_b->size--;
	write(1,"pa\n",3);
}
