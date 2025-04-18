/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:44:20 by rober             #+#    #+#             */
/*   Updated: 2025/03/23 17:51:56 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	sb(t_stack *stack_b)
{
	t_list	*first;
	t_list	*second;
		
	if (!stack_b->head || stack_b->head->value == stack_b->tail->value)
		return ;
	first = stack_b->head;
	second = stack_b->head->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	stack_b->head = second;
	first->prev = second;
	write (1,"sb\n",3);
}