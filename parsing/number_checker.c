/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:39:55 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/11/25 20:41:09 by mahal-zo         ###   ########.fr       */
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

static void	clear_split(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	is_empty_argument(char **array)
{
	if (!array)
		return (1);
	if (array[0] == NULL)
	{
		clear_split(array);
		return (1);
	}
	return (0);
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
		if (is_valid_number(split_ans[i], &num))
			add_back(stack, new_node(num, *index++));
		// if new node return null !!
		else if (!is_valid_flag(split_ans[i]))
		{
			clear_split(split_ans);
			clear(stack);
			return (-1);
		}
		i++;
	}
	clear_split(split_ans);
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
		{
			clear(&stack);
			return (NULL);
		}
		str_array++;
	}
	return (stack);
}
