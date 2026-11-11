/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:24:44 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/11 17:52:40 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf/ft_printf.h"
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

int					is_simple(char *flag);
int					is_medium(char *flag);
int					is_complex(char *flag);
int					is_adaptive(char *flag);
int					is_valid_flag(char *flag);
int					check_flags(char **str_array, int bench);
int					ft_strcmp(char *s1, char *s2);
void				add_back(t_stack **st, t_stack *new);
t_stack 	*new (void *content, int index);