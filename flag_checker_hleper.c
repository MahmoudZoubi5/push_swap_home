/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_checker_hleper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:37:02 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/11 17:43:53 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_simple(char *flag)
{
	return (ft_strcmp("--simple", flag) == 0);
}

int	is_medium(char *flag)
{
	return (ft_strcmp("--medium", flag) == 0);
}

int	is_complex(char *flag)
{
	return (ft_strcmp("--complex", flag) == 0);
}

int	is_adaptive(char *flag)
{
	return (ft_strcmp("--adaptive", flag) == 0);
}

int	is_bench(char *flag)
{
	return (ft_strcmp("--bench", flag) == 0);
}
