/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:20:02 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/06 15:20:48 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

void	*ft_memcpy(void *dest, void *src, int n)
{
	char		*ptdest;
	char	*ptsrc;
	int				i;

	ptdest = dest;
	ptsrc = src ;
	i = 0;
	if (!ptdest && !ptsrc)
		return (NULL);
	while (i < n)
	{
		ptdest[i] = ptsrc[i];
		i++;
	}
	return (dest);
}
