/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:17:48 by rober             #+#    #+#             */
/*   Updated: 2025/04/17 18:32:08 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

// void  ra(t_stack *stack_a)
// {
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*last;
	
// 	if (!stack_a->head || stack_a->head->value == stack_a->tail->value)
// 		return;
// 	first = stack_a->head;
// 	second = first->next;
// 	last = stack_a->tail;
// 	stack_a->head = second;
// 	stack_a->head->prev = NULL;
// 	last->next = first;
// 	stack_a->tail = first;
// 	first ->next = NULL;
// 	first->prev = last;
// 	write(1,"ra\n",3);
// }
void ra(t_stack *stack_a)
{
    t_list *first;
    t_list *second;
    t_list *last;

    // Verificar que stack_a y sus elementos sean válidos
    if (!stack_a || !stack_a->head || !stack_a->tail || stack_a->head == stack_a->tail)
        return;  // Asegurarse de que hay al menos dos elementos en la pila

    first = stack_a->head;
    second = first->next;
    last = stack_a->tail;

    // Verificar que second no sea NULL
    if (!second)
        return;

    stack_a->head = second;
    stack_a->head->prev = NULL;
    last->next = first;
    stack_a->tail = first;
    first->next = NULL;
    first->prev = last;
    write(1, "ra\n", 3);
}

