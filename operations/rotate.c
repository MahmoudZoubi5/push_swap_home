/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:35:10 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/23 12:04:37 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;

	if (!*stack || !((*stack)->next))
		return ;
	temp = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = temp->next;
	temp->next = NULL;
	last->next = temp;
}

void	rotate_a_rotate_b(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
