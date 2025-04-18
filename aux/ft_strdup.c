/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:18:03 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/06 15:37:37 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

char	*ft_strdup(char *s)
{
	char	*str;

	str = malloc((ft_strlen(s) + 1));
	if (str != NULL)
	{
		ft_memcpy(str, s, ft_strlen(s) + 1);
		return (str);
	}
	return (str);
}
