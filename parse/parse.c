/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:04:49 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/17 16:28:07 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	parse(char **args)
{
	t_stack	stack;
	
	if(char_checker(args))
	{
		if (sig_checker(args))
		{
			if (!void_checker(args))
			{
				stack = args_to_stack(args_to_list(args));
				if (dup_checker(stack.head))
				{
					// if (sort_checker(stack.head))
					// 	return (1);
					// else
					// 	return (0);
					return (1);
				}
				else
					return (0);
			}
			else
				return (0);
		}
		else
			return (0);
	}
	else
		return (0);

}
