/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_disorder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalzubi <oalzubi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 23:05:53 by oalzubi           #+#    #+#             */
/*   Updated: 2026/11/05 23:22:29 by oalzubi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double    checking_disorder(t_stack *stack)
{
    t_stack *current;
    double  disorder_count;
    double  total_count;

    current = stack;
    disorder_count = 0;
    total_count = 0;

    while (current && current->next)
    {
        if (current->value > current->next->value)
            disorder_count++;
        total_count++;
        current = current->next;
    }
    return (disorder_count / total_count);
}