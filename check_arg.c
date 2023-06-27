/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 00:13:07 by sunwookim         #+#    #+#             */
/*   Updated: 2023/06/27 12:56:48 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	chk_arg_length(char *arg)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (arg[0] == '+' || arg[0] == '-')
	{
		i++;
		len--;
	}
	while (arg[i] == '0')
		i++;
	while (arg[i++])
		len++;
	return (len);
}

static int	is_numeric(char *arg)
{
	int	i;

	if (!arg)
		return (0);
	i = -1;
	if (arg[0] == '+' || arg[0] == '-')
		i++;
	while (arg[++i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
	}
	return (1);
}

int	check_arg(char *arg)
{
	int	len;

	len = chk_arg_length(arg);
	if (!is_numeric(arg) || len > 11 || len < 0)
		return (0);
	else
		return (1);
}

void	check_duplicate(t_node *a)
{
	int		cur_value;
	t_node	*temp;

	while (a->next)
	{
		temp = a->next;
		cur_value = a->value;
		while (temp)
		{
			if (temp->value == cur_value)
				print_error();
			if (temp->next)
				temp = temp->next;
			else
				break ;
		}
		a = a->next;
	}
	while (a->prev)
		a = a->prev;
}
