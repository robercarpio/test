/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:33:34 by rober             #+#    #+#             */
/*   Updated: 2025/03/23 20:08:13 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	rb(t_stack *stack_b)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;
	
	if (!stack_b->head || stack_b->head->value == stack_b->tail->value)
		return ;
	first = stack_b->head;
	second = first->next;
	last = stack_b->tail;
	stack_b->head = second;
	stack_b->head->prev = NULL;
	last->next = first;
	stack_b->tail = first;
	first ->next = NULL;
	first->prev = last;
	write(1,"rb\n",3);
}
