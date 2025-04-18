/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:46:41 by rober             #+#    #+#             */
/*   Updated: 2025/04/18 16:40:40 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

// void	index_stack(t_stack *stack, int *arr, int arr_size)
// {
// 	t_list *current;
// 	int i;

// 	if (!stack || !stack->head || !arr)
// 		return;
// 	current = stack->head;
// 	while (current)
// 	{
// 		i = 0;
// 		while (i < arr_size)
// 		{
// 			if (current->value == arr[i])
// 			{
// 				current->index = i;
// 				break;
// 			}
// 			i++;
// 		}
// 		current = current->next;
// 	}
// }
void	index_stack(t_stack *stack, int *arr, int arr_size)
{
	t_list	*current;
	int		i;
	int		found;

	if (!stack || !stack->head || !arr)
		return;
	current = stack->head;
	while (current)
	{
		i = 0;
		found = 0;
		while (i < arr_size)
		{
			if (current->value == arr[i])
			{
				current->index = i;
				found = 1;
				break;
			}
			i++;
		}
		if (!found)
			current->index = -1;
		current = current->next;
	}
}
