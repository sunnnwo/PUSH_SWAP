/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:21:18 by sunwookim         #+#    #+#             */
/*   Updated: 2023/06/27 21:17:29 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "structures.h"

void	print_error(void);
int		check_arg(char *arg);
void	check_duplicate(t_node *a);
int		ft_atoi(const char *arg);
t_stack	*init_stack(void);
t_node	*make_stack(int argc, char **argv, t_stack **stack);
void	init_value(t_value *var);
int		get_min_value(t_node *node, int size);
int		get_max_value(t_node *node, int size);
int		get_mid_value_five(t_node *node);

void	swap_stack(t_stack *stack, int flag);
void	swap_all_stack(t_stack *a, t_stack *b, int flag);
void	push_stack(t_stack *from, t_stack *to, int flag);
void	rotate_stack(t_stack *stack, int flag);
void	rotate_all_stack(t_stack *a, t_stack *b, int flag);
void	reverse_rotate_stack(t_stack *stack, int flag);
void	reverse_rotate_all_stack(t_stack *a, t_stack *b, int flag);

void	push_swap(t_stack *a, t_stack *b);
void	handle_arg_three_a(int r, t_stack *a);
void	handle_arg_three_b(int r, t_stack *a, t_stack *b);
void	handle_under_three(int r, t_stack *a, t_stack *b, int flag);
void	handle_arg_two(t_stack *a, t_stack *b, int flag);
void	handle_arg_five(t_stack *a, t_stack *b);
void	hanlde_sort_five(int size, t_stack *a, t_stack *b, int flag);
void	select_pivot(int r, t_stack *stack, t_value *var);
void	a_to_b(int r, t_stack *a, t_stack *b, int *cnt);
void	b_to_a(int r, t_stack *a, t_stack *b, int *cnt);
void	free_all(t_stack *a, t_stack *b);

void	print_stack_a(t_stack *a);
void	print_stack_b(t_stack *b);

size_t	ft_strlen(const char *s);
int		ft_isdigit(int c);
void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char const *s, char c);

#endif
