/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_min_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:21:59 by sunwookim         #+#    #+#             */
/*   Updated: 2023/06/27 13:25:28 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	sort_values(int value[])
{
	int	i;
	int	j;
	int	tmp;

	i = 5;
	while (--i > 0)
	{
		j = -1;
		while (++j < i)
		{
			if (value[j] > value[j + 1])
			{
				tmp = value[j + 1];
				value[j + 1] = value[j];
				value[j] = tmp;
			}
		}
	}
	return (value[2]);
}

int	get_mid_value_five(t_node *node)
{
	int	i;
	int	value[5];

	i = -1;
	while (++i < 5)
	{
		value[i] = node->value;
		if (node->next)
			node = node->next;
		else
			break ;
	}
	while (node->prev)
		node = node->prev;
	return (sort_values(value));
}

int	get_min_value(t_node *node, int size)
{
	int	min;

	min = node->value;
	while (size--)
	{
		if (min > node->value)
			min = node->value;
		if (node->next)
			node = node->next;
		else
			break ;
	}
	while (node->prev)
		node = node->prev;
	return (min);
}

int	get_max_value(t_node *node, int size)
{
	int	max;

	max = node->value;
	while (size--)
	{
		if (max < node->value)
			max = node->value;
		if (node->next)
			node = node->next;
		else
			break ;
	}
	while (node->prev)
		node = node->prev;
	return (max);
}
