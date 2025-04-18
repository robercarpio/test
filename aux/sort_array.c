/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:06:36 by rober             #+#    #+#             */
/*   Updated: 2025/04/17 18:50:04 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int *sort_array(int *arr, int size)
{
    int *ordenado;
    int i, j, temp;

    if (!arr || size <= 0)
        return NULL;

    ordenado = (int *)malloc(size * sizeof(int));
    if (!ordenado)
        return NULL;

    i = 0;
    while (i < size)
    {
        ordenado[i] = arr[i];
        j = i;
        while (j > 0 && ordenado[j] < ordenado[j - 1])
        {
            temp = ordenado[j];
            ordenado[j] = ordenado[j - 1];
            ordenado[j - 1] = temp;
            j--;
        }
        i++;
    }
    return ordenado;
}
