/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:07:59 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/10 18:45:45 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// in this file will get the input and parse it to valid input 

#include "push_swap.h"

int	no_argument(int size)
{
	return (size == 1);
}

int	main(int ac, char **av)
{
	if (no_argument(ac))
	{
		ft_printf("Error\n");
		return (0);
	}
	
}