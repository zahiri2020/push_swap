/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:40:40 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/18 16:50:08 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_a_to_b(t_list **a, t_list **b)
{
	int	chunk2;
	int	chunk1;

	chunk1 = 0;
	chunk2 = 0;
	while (ft_lstsize(*a) > 3)
	{
		chunk2 = ft_lstsize(*a) / 6 + chunk1;
		chunk1 = ft_lstsize(*a) / 3 + chunk1;
		while (ft_lstsize(*b) < chunk1)
		{
			if (*b && (*a)->index >= chunk1 && (*b)->index < chunk2)
				rr(a, b);
			else if (*b && (*b)->index < chunk2)
				rb(b);
			if (*a && (*a)->index < chunk1)
				pb(a, b);
			else
				ra(a);
		}
	}
	ft_sorted_3(a);
	sorting(a, b);
}
