/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_checker_hleper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:37:02 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/10 18:37:29 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_simple(char *flag)
{
	return (ft_strncmp("--simple", flag, ft_strlen(flag)));
}

int	is_medium(char *flag)
{
	return (ft_strncmp("--medium", flag, ft_strlen(flag)));
}

int	is_complex(char *flag)
{
	return (ft_strncmp("--complex", flag, ft_strlen(flag)));
}

int	is_adaptive(char *flag)
{
	return (ft_strncmp("--adaptive", flag, ft_strlen(flag)));
}

int	is_bench(char *flag)
{
	return (ft_strncmp("--bench", flag, ft_strlen(flag)));
}
