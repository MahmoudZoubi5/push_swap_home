/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:39:55 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/23 17:15:20 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_valid_number(char *str_num, int *ans)
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
		if (str_num[i] == '\0')
			return (0);
	}
	while (str_num[i] >= '0' && str_num[i] <= '9')
	{
		num = num * 10 + (str_num[i] - '0');
		i++;
	}
	num *= s;
	*ans = num;
	if (str_num[i] != '\0' || num > 2147483647 || num < -2147483648)
		return (0);
	return (1);
}

static int	is_empty_argument(char **array)
{
	return (array[0] == NULL);
}

static int	check_argument(char *arg, t_stack **stack, int *index)
{
	char	**split_ans;
	int		i;
	int		num;

	i = 0;
	split_ans = ft_split(arg, ' ');
	if (is_empty_argument(split_ans))
		return (-1);
	while (split_ans[i] != NULL)
	{
		if (is_valid_number(*split_ans, &num))
			add_back(stack, new_node(num, *index++));
		else if (!is_valid_flag(*split_ans))
		{
			clear(stack);
			return (-1);
		}
		i++;
	}
	free(split_ans);
	return (1);
}

t_stack	*check_number(char **str_array)
{
	int		index;
	t_stack	*stack;

	stack = NULL;
	index = 0;
	while (*str_array != NULL)
	{
		if (check_argument(*str_array, &stack, &index) == -1)
			return (NULL);
		str_array++;
	}
	return (stack);
}
