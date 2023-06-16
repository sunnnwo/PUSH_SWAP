/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sunwookim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:15:58 by sunwookim         #+#    #+#             */
/*   Updated: 2023/06/15 23:06:10 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct node
{
    int data;
    struct node *next;
}t_node;

typedef struct Stack
{
    t_node *top;
    int count;
}Stack;

void    sa(Stack *stack);
void    ra(Stack *stack);
void    print_stack(Stack *stack);
void    InitStack(Stack *stack);
int     IsEmpty(Stack *stack);
void    Push(Stack *stack, int data);
int     Pop(Stack *stack);
char    **ft_split(char const *s, char c);