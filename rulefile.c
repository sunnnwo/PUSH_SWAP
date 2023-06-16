/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rulefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim <sun-wkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:32:03 by sunwookim         #+#    #+#             */
/*   Updated: 2023/06/16 12:03:12 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


//위에 두개 바꾸기
void    sa(Stack *stack)
{
    t_node  *node;
    t_node  *temp;
    
    node = stack -> top -> next;
    temp = stack -> top;
    temp -> next = node -> next;
    stack -> top = node;
    stack -> top -> next = temp;
}

//a->b로 옮기기

void    pa(Stack *stack_a, Stack *stack_b)
{
    t_node  *node_a;
    t_node  *node_b;
    t_node  *temp;

    node_a = stack_a -> top;
    stack_a -> top = node_a -> next;

    if (stack_b -> top == NULL)
    {
        stack_b -> top = node_a;
        node_a -> next = NULL;
    }
    else
    {
        node_a -> next = stack_b -> top;
        stack_b -> top = node_a; 
    }
    // node_b = stack_b -> top;
    // node_a -> next = node_b;
    // stack_b -> top = node_a;
}

//마지막으로 보내기.
void    ra(Stack *stack)
{
    t_node  *node;
    t_node  *temp;


    temp = stack -> top;
    stack -> top = temp -> next;
    temp -> next = NULL;
    node = stack -> top;
    while (node -> next != NULL)
        node = node -> next;
    node -> next = temp;
    // printf("%d", node -> data);
}

void    Push(Stack *stack, int data)
{
    t_node *now = (t_node *) malloc(sizeof (t_node));
    now -> data = data;
    now -> next = stack -> top;
    stack -> top = now;
    stack -> count++;
}

int Pop(Stack *stack)
{
    t_node *now;
    int re;
    if (IsEmpty(stack))
        return (0);
    now = stack -> top;
    re = now -> data;

    stack -> top = now -> next;
    free(now);
    return (re);
}