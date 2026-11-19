/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:39:55 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/19 23:03:08 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_number(char *str_num, int *ans)
{
	long long int	num;
	int				s;
	int				i;

	num = 0;
	s = 1;
	i = 0;
	if (str_num[i] == '+' || str_num[i] == '-')
	{
		if (str_num[i] == '-')
			s = -1;
		i++;
	}
	while (str_num[i] >= '0' && str_num[i] <= '9')
	{
		num = num * 10 + (str_num[i] - '0');
		i++;
	}
	*ans = num;
	if (str_num[i] != '\0' || num > 2147483647 || num < -2147483648)
		return (0);
	return (1);
}


t_stack	*check_number(char **str_array)
{
	char	**split_ans;
	int		num;
	int		index;
	t_stack	*stack;

	index = 0;
	while (*str_array != NULL)
	{
		split_ans = ft_split(*str_array, ' ');
		while (*split_ans != NULL)
		{
			if (is_valid_number(*split_ans, &num))
				add_back(&stack, new(num, index++));
			else if (!is_valid_flag(*split_ans))
			{
				clear(&stack);
				return (NULL);
			}
			split_ans++;
		}
		str_array++;
	}
	return (stack);
}
