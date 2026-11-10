/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:24:44 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/10 18:51:01 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "printf/ft_printf.h"
#include "Libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

int	is_simple(char *flag);
int	is_medium(char *flag);
int	is_complex(char *flag);
int	is_adaptive(char *flag);
int	is_valid_flag(char *flag);
int	check_flags(char **str_array, int bench);