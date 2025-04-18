/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:58:09 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/18 18:04:15 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

	t_list	*add_split_to_list(char **split, t_list *tail, t_list **head)
	{
		int		j;
		t_list	*new;

		j = 0;
		while (split[j])
		{
			new = malloc(sizeof(t_list));
			if (!new)
			{
				free_split(split);
				return (NULL);
			}
			new->value = ft_atoi(split[j]);
			new->next = NULL;
			new->prev = tail;
			if (!*head)
				*head = new;
			else
				tail->next = new;
			tail = new;
			j++;
		}
		free_split(split);
		return (tail);
	}

	t_list	*args_to_list(char **args)
	{
		int		i;
		char	**split;
		t_list	*head;
		t_list	*tail;

		i = 0;
		head = NULL;
		tail = NULL;
		while (args[i])
		{
			split = ft_split(args[i], ' ');
			if (!split)
				return (NULL);
			tail = add_split_to_list(split, tail, &head);
			if (!tail)
				return (NULL);
			i++;
		}
		return (head);
	}
