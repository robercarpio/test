/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:38:51 by rober             #+#    #+#             */
/*   Updated: 2025/04/17 18:35:04 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

// void	rra(t_stack *stack_a)
// {
// 	t_list	*first;	
// 	t_list	*last;
	
// 	if (!stack_a->head || stack_a->head->value == stack_a->tail->value)
// 		return ;
// 	first = stack_a->head;
// 	last = stack_a->tail;
// 	stack_a->tail = last->prev;
// 	stack_a->tail->next = NULL;
// 	last->prev = NULL;
// 	last->next = first;
// 	stack_a->head->prev = last;
// 	stack_a->head = last;
// 	write(1,"rra\n",4);
// }
void rra(t_stack *stack_a)
{
    t_list *first;
    t_list *last;

    // Verificar que stack_a y sus elementos sean válidos
    if (!stack_a || !stack_a->head || !stack_a->tail || stack_a->head == stack_a->tail)
        return;  // Asegurarse de que hay al menos dos elementos en la pila

    first = stack_a->head;
    last = stack_a->tail;

    // Verificar que last->prev no sea NULL
    if (!last->prev)
        return;

    stack_a->tail = last->prev;
    stack_a->tail->next = NULL;
    last->prev = NULL;
    last->next = first;
    stack_a->head->prev = last;
    stack_a->head = last;
    write(1, "rra\n", 4);
}
