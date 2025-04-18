/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:09:08 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/17 18:36:12 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

t_stack args_to_stack(t_list *list)
{
    t_stack stack;
    int i;

    i = 0;
    stack.size = list_size(list);
    stack.head = NULL;  // Asegúrate de inicializar a NULL
    stack.tail = NULL;  // Asegúrate de inicializar a NULL

    // Si la lista está vacía, no hace falta hacer más
    if (stack.size == 0)
        return stack;

    while (list)
    {
        if (i == 0)
            stack.head = list;
        if (i == stack.size - 1)  // Aquí cambiamos para que no sea == stack.size
            stack.tail = list;
        list = list->next;
        i++;
    }

    return stack;
}

// t_stack args_to_stack(t_list *list)
// {
// 	t_stack stack;
// 	int	i;

// 	i = 0;
// 	stack.size = list_size(list);
// 	while (list)
// 	{
// 		if (i == 0)
// 			stack.head = list;
// 		if (i == stack.size)
// 			stack.tail = list;
// 		list = list->next;
// 		i++;
// 	}
// 	return (stack);
// }

//head cuando el contador sea 0
//tail cuando el contador sea igual index counter
