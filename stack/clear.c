/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:18:32 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/11 17:08:29 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear(t_stack **st, void (*del)(void *))
{
	t_stack	*need_del;

	if (!st)
		return ;
	while ((*st) != NULL)
	{
		need_del = (*st);
		(*st) = (*st)->next;
		delone(need_del, del);
	}
	st = NULL;
}
