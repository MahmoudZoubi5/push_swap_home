/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:32:22 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/10 18:53:24 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_flag(char *flag)
{
	return (is_simple(flag) || is_medium(flag) || is_complex(flag)
		|| is_adaptive(flag) || is_bench(flag));
}

int	check_flags(char **str_array, int bench)
{
	int	number_of_flags;
	int	ans;

	number_of_flags = 0;
	ans = 0;
	while (*str_array != NULL)
	{
		if (is_simple(*str_array))
			ans = 1;
		else if (is_medium(*str_array))
			ans = 2;
		else if (is_complex(*str_array))
			ans = 3;
		else if (is_adaptive(*str_array))
			ans = 4;
		else if (is_bench(*str_array))
			bench = 1;
		else if (is_valid_flag(*str_array))
			number_of_flags++;
		(str_array)++;
	}
	if (number_of_flags > 2 || !(bench == 1 && number_of_flags == 2))
		return (-1);
	return (ans);
}
