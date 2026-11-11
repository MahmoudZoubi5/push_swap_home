/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:01:09 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/11 17:27:00 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	add_back(t_stack **st, t_stack *new)
{
	t_stack	*lastnode;

	if ((*st) == NULL)
	{
		(*st) = new;
	}
	else
	{
		lastnode = last(*st);
		lastnode->next = new;
	}
}
