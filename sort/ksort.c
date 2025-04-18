/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:12:17 by rober             #+#    #+#             */
/*   Updated: 2025/04/17 17:53:05 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	sort(t_stack *stack_a, t_stack *stack_b)
{
	(void) stack_b;
	if (list_size(stack_a->head) == 2)
		sa(stack_a);
	else if (list_size(stack_a->head) == 3)
		sort_three(stack_a);
	else if (list_size(stack_a->head) <= 7)
		insert_sort(stack_a,stack_b);
	else
	{
		ksort_a(stack_a,stack_b);
		ksort_b(stack_a,stack_b);
	}
}

void	sort_three(t_stack *stack_a)
{
	int	first;
	int	second;
	int	third;
	
	first = stack_a->head->value;
	second = stack_a->head->next->value;
	third = stack_a->head->next->next->value;
	if (!stack_a || !stack_a->head || !stack_a->head->next || !stack_a->head->next->next)
    	return;
	else if (first > second && second > third)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (first > second && third > second && third < first)
		ra(stack_a);
	else if (first < second && first > third)
		rra(stack_a);
	else if (first > second && first < third)
		sa(stack_a);
	else if (first < second && first < third && second > third)
	{
		sa(stack_a);
		ra(stack_a);
	}
}

void	insert_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	min;
	int	rotations;
	int	size;

	while (list_size(stack_a->head) > 3)
	{
		min = min_index(stack_a);
		rotations = count_r(stack_a->head, min);
		size = list_size(stack_a->head);
		if (rotations <= size / 2)
		{
			while (stack_a->head->index != min)
				ra(stack_a);
		}
		else
		{
			while (stack_a->head->index != min)
				rra(stack_a);
		}
		pb(stack_b, stack_a);
	}
	if (list_size(stack_a->head) == 3)
		sort_three(stack_a);
	while (list_size(stack_b->head) > 0)
		pa(stack_a, stack_b);
}

void	ksort_a(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	range;
	int	size;

	i = 0;
	size = list_size(stack_a->head);
	range = ft_sqrt(size) * 14 / 10;
	while (stack_a->head)
	{
		if (stack_a->head->index <= i)
		{
			pb(stack_b, stack_a);
			size--;
			rb(stack_b);
			i++;
		}
		else if (stack_a->head->index <= i + range)
		{
			pb(stack_b, stack_a);
			size--;
			i++;
		}
		else
			ra(stack_a);
	}
}
void	ksort_b(t_stack *stack_a, t_stack *stack_b)
{
	int	rb_count;
	int	rrb_count;
	int	max;

	max = list_size(stack_b->head) - 1;
	while (list_size(stack_b->head) > 0)
	{
		rb_count = count_r(stack_b->head, max);
		rrb_count = list_size(stack_b->head) - rb_count;
		if (rb_count <= rrb_count)
		{
			while (stack_b->head->index != max)
				rb(stack_b);
		}
		else
		{
			while (stack_b->head->index != max)
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
		max--;
	}
}
