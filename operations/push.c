/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalzubi <oalzubi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:33:07 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/05 22:37:01 by oalzubi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_stack **src, t_stack **dest)
{
    t_stack *temp;

    if (!*src)
        return ;
    temp = *src;
    *src = (*src)->next;
    temp->next = *dest;
    *dest = temp;
}