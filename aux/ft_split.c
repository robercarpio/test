/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:13:27 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/17 19:13:48 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

static int	ft_countwords(char *str, int c)
{
	int	i;
	int		b;

	b = 0;
	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			if (b == 0)
			{
				i++;
				b = 1;
			}
		}
		else
		{
			b = 0;
		}
		str++;
	}
	return (i);
}

static char	**ft_free(int i, char **arr)
{
	while (i >= 0)
		free(arr[i--]);
	free(arr);
	return (NULL);
}

static char	**ft_fill(char *s, char c, char **arr)
{
	int		i;
	int		start;
	int		pos;

	i = 0;
	pos = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				arr[pos] = ft_substr(s, start, i - start);
				if (!arr[pos])  // Si ft_substr falla, libera la memoria y retorna NULL
					return (ft_free(pos, arr));
				pos++;
			}
		}
	}
	return (arr);
}

char	**ft_split(char *s, char c)
{
	int		words;
	char	**arr;
	char	**tmp;
	
	words = ft_countwords(s, c);
	arr = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	tmp = ft_fill(s, c, arr);
	if (!tmp)  // Si tmp es NULL, libera la memoria
	{
		free(arr);
		return (NULL);
	}
	return (tmp);
}

// static int	ft_countwords(char *str, int c)
// {
// 	int	i;
// 	int		b;

// 	b = 0;
// 	i = 0;
// 	while (*str)
// 	{
// 		if (*str != c)
// 		{
// 			if (b == 0)
// 			{
// 				i++;
// 				b = 1;
// 			}
// 		}
// 		else
// 		{
// 			b = 0;
// 		}
// 		str++;
// 	}
// 	return (i);
// }

// static char	**ft_free(int i, char **arr)
// {
// 	while (i >= 0)
// 		free(arr[i--]);
// 	free(arr);
// 	return (NULL);
// }

// static char	**ft_fill(char *s, char c, char **arr)
// {
// 	int	i;
// 	int	start;
// 	int	pos;

// 	i = 0;
// 	pos = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (s[i] == c)
// 			i++;
// 		start = i;
// 		while (s[i] != c && s[i] != '\0')
// 		{
// 			i++;
// 			if (s[i] == c || s[i] == '\0')
// 			{
// 				arr[pos] = ft_substr(s, start, i - start);
// 				if (!arr[pos])
// 					return (ft_free(pos, arr));
// 				pos++;
// 			}
// 		}
// 	}
// 	return (arr);
// }


// char	**ft_split(char *s, char c)
// {
// 	int	words;
// 	char	**arr;
// 	char	**tmp;
	
// 	words = ft_countwords(s, c);
// 	arr = (char **)ft_calloc(words + 1, sizeof(char *));
// 	if (!arr)
// 		return (NULL);
// 	tmp = ft_fill(s, c, arr);
// 	return (tmp);
// }
