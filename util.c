/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim <sun-wkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:18:27 by sunwookim         #+#    #+#             */
/*   Updated: 2023/06/16 12:04:22 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"






void InitStack(Stack *stack)
{
    stack -> top = NULL;
    stack -> count = 0;
}

int IsEmpty(Stack *stack)
{
    return (stack -> top == NULL);
}

void    print_stack(Stack *stack)
{
    t_node  *p_node;

    p_node = stack -> top;
    while (p_node)
    {
        printf("%d ", p_node -> data);
        p_node = p_node -> next;
    }
    printf("\n");
}

