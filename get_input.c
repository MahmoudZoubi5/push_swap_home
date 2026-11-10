/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:07:59 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/10 14:32:02 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// in this file will get the input and parse it to valid input 

#include "printf/ft_printf.h"
#include "Libft/libft.h"

int	no_argument(int size)
{
	return (size == 1);
}




int check_flags(char **array, int size)
{
	
}

int	main(int ac, char **av)
{
	if (no_argument(ac))
	{
		ft_printf("Error\n");
		return (0);
	}
	
}