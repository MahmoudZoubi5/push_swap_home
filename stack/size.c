/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 12:25:09 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/11 17:27:00 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	size(t_stack *st)
{
	unsigned int	size;

	size = 0;
	while (st != NULL)
	{
		size++;
		st = st->next;
	}
	return (size);
}
