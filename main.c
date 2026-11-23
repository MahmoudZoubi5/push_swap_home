/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 13:21:51 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/23 14:34:42 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack;
	int		is_bench;

	is_bench = 0;

	stack = parsing(ac, av, &is_bench);
	while (stack != NULL)
	{
		ft_printf("index : %d ----> val: %d\n", stack->index, stack->content);
		stack = stack->next;
	}
}
