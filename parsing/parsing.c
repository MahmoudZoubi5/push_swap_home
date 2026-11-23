/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:07:59 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/23 17:15:53 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	no_argument(int size)
{
	return (size == 1);
}

t_stack	*parsing(int ac, char **av, int *bench)
{
	t_stack	*stack;

	if (no_argument(ac))
	{
		ft_printf("Error no argument \n");
		return (NULL);
	}
	if (check_flags(&av[1], bench) == -1)
	{
		ft_printf("Error flag\n");
		return (NULL);
	}
	stack = check_number(&av[1]);
	if (stack == NULL)
	{
		ft_printf("Error in number \n");
		return (NULL);
	}
	if (check_duplicate_number(stack))
	{
		ft_printf("Error duplicate number \n");
		return (NULL);
	}
	return (stack);
}
