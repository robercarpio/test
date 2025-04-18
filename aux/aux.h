/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:58 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/17 17:11:27 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUX_H
# define AUX_H

#include <stdlib.h>


typedef struct s_list
{
	struct s_list	*prev;
	int				value;
	int	index;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	t_list			*head;
	t_list			*tail;
	int				size;
}	t_stack;

char	**ft_split(char *s, char c);
char	*ft_substr(char *s,int start,int len);
int		ft_strlen(char *str);
void	*ft_memcpy(void *dest, void *src, int n);
int		ft_strlcpy(char *dst, char *src, int size);
void	ft_bzero(void *s, int n);
void	*ft_calloc(int nmemb, int size);
void	*ft_memcpy(void *dest, void *src, int n);
char	*ft_strdup(char *s);
int		ft_strlen(char *str);
int		ft_strlcpy(char *dst, char *src, int size);
void	free_split(char **arr);
int		array_length(char **arr);
int		only_chars_allowed(char *str, char *allow);
int		sig_count(char *str);
int		ft_atoi(char *nptr);
int		list_size(t_list *list);
int		find_dup_value(t_list *node);
t_stack	create_stack(void);
int	max_value_stack(t_stack stack);
int	min_value_stack (t_stack stack);
int *sort_array(int *arr, int size);
int   min_index(t_stack *node);
int   count_r(t_list *node, int min_index);
int   ft_sqrt(int n);
void	free_list(t_list *head);
void	free_stack(t_stack *stack);

#endif