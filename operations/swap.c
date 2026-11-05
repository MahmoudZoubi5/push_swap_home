/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalzubi <oalzubi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:35:41 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/05 22:36:58 by oalzubi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_stack **stack)
{
    t_stack *temp;

    if (!*stack || !(*stack)->next)
        return ;
    temp = (*stack)->next;
    (*stack)->next = temp->next;
    temp->next = *stack;
    *stack = temp;
}

void    swap_a_swap_b(t_stack **stack_a, t_stack **stack_b)
{
    swap(stack_a);
    swap(stack_b);
}