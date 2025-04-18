/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_chars_allowed.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:11:50 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/05 00:14:53 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int	only_chars_allowed(char *str, char *allow)
{
	int	i;
	int	b;

	while (*str)
	{
		b = 0;
		i = 0;
		while (allow[i] && b != 1)
		{
			if (*str == allow[i] || *str == '\n')
				b = 1;
			i++;
		}
		if (b == 0)
			return (0);
		str++;
	}
	return (b);
}
