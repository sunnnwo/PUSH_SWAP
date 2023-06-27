/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_under_three.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:39:39 by sunwookim         #+#    #+#             */
/*   Updated: 2023/06/27 13:34:31 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_arg_two(t_stack *a, t_stack *b, int flag)
{
	if (flag == A)
	{
		if (a->top->value > a->top->next->value)
			swap_stack(a, A);
	}
	else
	{
		if (b->top->value < b->top->next->value)
			swap_stack(b, B);
		push_stack(b, a, A);
		push_stack(b, a, A);
	}
}

void	handle_under_three(int r, t_stack *a, t_stack *b, int flag)
{
	if (r == 3)
	{
		if (flag == A)
			handle_arg_three_a(r, a);
		else
			handle_arg_three_b(r, a, b);
	}
	else if (r == 2)
		handle_arg_two(a, b, flag);
	else if (r == 1)
	{
		if (flag == B)
			push_stack(b, a, A);
	}
}
