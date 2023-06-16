/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rulefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sunwookim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:32:03 by sunwookim         #+#    #+#             */
/*   Updated: 2023/06/16 00:02:12 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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