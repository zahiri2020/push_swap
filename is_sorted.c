/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:16:55 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/15 10:45:00 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int   is_sorted(t_list *stack_a)
{
	if (!stack_a || !stack_a->next)
		return(1);
	t_list *tmp;

	tmp = stack_a; 
	while (tmp && tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (1);
		tmp=tmp->next;
	}
	return (0);
}