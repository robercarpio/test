/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:01:38 by rober             #+#    #+#             */
/*   Updated: 2025/04/14 19:02:05 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void  pb(t_stack *stack_b, t_stack *stack_a)
{
      t_list	*first_a;

	if (stack_a->size == 0)
		return ;
	first_a = stack_a->head;
	stack_a->head = first_a->next;
	if (stack_a->head != NULL)
		stack_a->head->prev = NULL;
	else
		stack_a->tail = NULL;
	first_a->next = stack_b->head;
	if (stack_b->head != NULL)
		stack_b->head->prev = first_a;
	else
		stack_b->tail = first_a;
	stack_b->head = first_a;
	stack_b->head->prev = NULL;
	stack_b->size++;
	stack_a->size--;
	write(1,"pb\n",3);
}
