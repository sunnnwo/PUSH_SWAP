/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sunwookim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:18:24 by sunwookim         #+#    #+#             */
/*   Updated: 2023/06/15 23:27:43 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int argc, char **argv)
{
    int i;
    Stack stack;
    char **temp;

    InitStack(&stack);
    i = 0;
    if (argc == 2)
    {
        temp = ft_split(argv[1], ' ');
        while (temp[i])
        {
            Push(&stack, atoi(temp[i]));
            i++;
        }         
    }
    // ra(&stack);
    // print_stack(&stack);
   
    // ra(&stack);
    // print_stack(&stack);
   
    // ra(&stack);
    // print_stack(&stack);
   
    sa(&stack);
    print_stack(&stack);
    // while (!IsEmpty(&stack))
    // {
    //     printf("%d ", Pop(&stack));
    // }
    printf("\n");
    return (0);
}