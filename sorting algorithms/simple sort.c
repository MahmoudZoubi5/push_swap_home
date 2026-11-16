/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalzubi <oalzubi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 17:12:21 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/16 20:50:21 by oalzubi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void simple_sort(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *min_node = *stack_a;
    t_stack *current = *stack_a;

    while (*stack_a)
    {
        while (current)
        {
            if (current->value < min_node->value)
                min_node = current;
            current = current->next;
        }
        if (min_node == *stack_a)
            push(stack_a, stack_b);
        else
        {
            while (*stack_a != min_node)
            {
                if (index_of(*stack_a, min_node->value) < stack_size(*stack_a) / 2)
                    rotate(stack_a);
                else
                    reverse_rotate(stack_a);
            }
            push(stack_a, stack_b);
        }
    }
}