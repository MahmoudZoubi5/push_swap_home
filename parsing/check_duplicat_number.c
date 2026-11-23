/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicat_number.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 14:01:29 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/23 14:21:02 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_duplicate_number(t_stack *stack)
{
	t_stack	*temp;
	int		is_duplicate;

	is_duplicate = 0;
	while (stack != NULL && is_duplicate == 0)
	{
		temp = stack->next;
		while (temp != NULL && temp != stack && is_duplicate == 0)
		{
			if (temp->content == stack->content)
				is_duplicate = 1;
			temp = temp->next;
		}
		stack = stack->next;
	}
	return (is_duplicate);
}
