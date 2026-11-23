/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   marge_two_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:35:29 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/23 17:04:05 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	marge_two_stacks(t_stack *d, t_stack *s)
{
	t_stack	*temp;

	temp = last(d);
	temp->next = s;
}
