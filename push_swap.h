/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:24:44 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/19 22:47:25 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "printf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

t_stack *new (int content, int index);
t_stack				*check_number(char **str_array);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *s);
int					is_simple(char *flag);
int					is_medium(char *flag);
int					is_complex(char *flag);
int					is_adaptive(char *flag);
int					is_bench(char *flag);
int					is_valid_flag(char *flag);
int					check_flags(char **str_array, int bench);
int					ft_strcmp(char *s1, char *s2);
void				add_back(t_stack **st, t_stack *new);
void				clear(t_stack **st);
t_stack				*last(t_stack *st);
void				delone(t_stack *st);
char				**ft_split(char const *s, char c);

#endif