/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:34:11 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/10 15:15:32 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;

	if (!*stack || !((*stack)->next))
		return ;
	temp = *stack;
	while (temp->next->next) 
		temp = temp->next;   // why you didn't use the ft_lstlast() in libft
	last = temp->next;
	temp->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	reverse_rotate_a_reverse_rotate_b(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
