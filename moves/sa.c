/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:50:06 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/23 17:33:54 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	sa(t_stack *stack_a)
{
	t_list	*first;
	t_list	*second;
		
	if (!stack_a->head || stack_a->head->value == stack_a->tail->value)
		return ;
	first = stack_a->head;
	second = stack_a->head->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	stack_a->head = second;
	first->prev = second;
	write (1,"sa\n",3);
}