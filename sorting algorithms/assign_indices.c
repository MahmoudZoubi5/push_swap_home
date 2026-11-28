/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_indices.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalzubi <oalzubi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 13:51:02 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/28 18:55:09 by oalzubi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void assign_indices(t_stack *stack)
{
    t_stack *current;
    t_stack *runner;
    int index;

    current = stack;
    while (current)
    {
        index = 0;
        runner = stack;
        while (runner)
        {
            if (runner->value < current->value)
                index++;
            runner = runner->next;
        }
        current->index = index;
        current = current->next;
    }
}