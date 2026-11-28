/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalzubi <oalzubi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 20:52:14 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/28 18:55:09 by oalzubi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


#include "push_swap.h"

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

int	max_position(t_stack *stack)
{
	int	max;
	int	pos;
	int	max_pos;

	max = stack->value;
	pos = 0;
	max_pos = 0;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			max_pos = pos;
		}
		stack = stack->next;
		pos++;
	}
	return (max_pos);
}

void	push_chunk(t_stack **a, t_stack **b,
		int start, int end, int count)
{
	int	i;

	i = 0;
	while (i < count && *a)
	{
		if ((*a)->index >= start && (*a)->index <= end)
		{
			if ((*a)->index < start + (end - start + 1) / 2)
			{
				push(a, b);
				rotate(b);
			}
			else
				push(a, b);
		}
		else
			rotate(a);
		i++;
	}
}

void	push_chunks(t_stack **a, t_stack **b)
{
	int	size;
	int	chunk_size;
	int	start;
	int	end;
	int	count;

	size = stack_size(*a);
	chunk_size = 1;
	while (chunk_size * chunk_size < size)
		chunk_size++;
	start = 0;
	while (start < size)
	{
		end = start + chunk_size - 1;
		if (end >= size)
			end = size - 1;
		count = stack_size(*a);
		push_chunk(a, b, start, end, count);
		start += chunk_size;
	}
}

void	push_back(t_stack **a, t_stack **b)
{
	int	pos;
	int	size;

	while (*b)
	{
		size = stack_size(*b);
		pos = max_position(*b);
		if (pos <= size / 2)
		{
			while (pos-- > 0)
				rotate(b);
		}
		else
		{
			while (pos++ < size)
				rotate_reverse(b);
		}
		push(a, b);
	}
}

void	chunk_sort(t_stack **a, t_stack **b)
{
	push_chunks(a, b);
	push_back(a, b);
}
