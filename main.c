/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim <sun-wkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:18:24 by sunwookim         #+#    #+#             */
/*   Updated: 2023/06/16 12:04:03 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int argc, char **argv)
{
    int i;
    Stack stack_a;
    Stack stack_b;
    char **temp;

    InitStack(&stack_a);
    InitStack(&stack_b);
    i = 0;
    if (argc == 2)
    {
        temp = ft_split(argv[1], ' ');
        while (temp[i])
        {
            Push(&stack_a,ft_atoi(temp[i]));
            i++;
        }         
    }
    // ra(&stack);
    // print_stack(&stack);
   
    // ra(&stack);
    // print_stack(&stack);
   
    // ra(&stack);
    // print_stack(&stack);
   
    // sa(&stack_a);
    pa(&stack_a, &stack_b);
     pa(&stack_a, &stack_b);

    print_stack(&stack_a);
    print_stack(&stack_b);
    // while (!IsEmpty(&stack))
    // {
    //     printf("%d ", Pop(&stack));
    // }
    printf("\n");
    return (0);
}