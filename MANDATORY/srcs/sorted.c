/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 06:03:28 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/27 18:25:22 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_best_move(t_list *b, int index)
{
	int		i;
	int		size;
	t_list	*tmp;

	tmp = b;
	size = ft_lstsize(b);
	i = 0;
	while (i <= size / 2)
	{
		if (index == tmp->index)
			return (1);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

void	sorting(t_list	**a, t_list **b)
{
	int	max;

	max = ft_lstlast(*a)->index;
	while (*b)
	{
		if ((*a)->index - 1 == (*b)->index)
			pa(b, a);
		else if ((*a)->index - 1 == ft_lstlast(*b)->index)
		{
			rrb(b);
			pa(b, a);
		}
		else if (ft_lstlast(*a)->index == max)
		{
			pa(b, a);
			ra(a);
		}
		else if (ft_lstlast(*a)->index < (*b)->index)
		{
			pa(b, a);
			ra(a);
		}
		else if (ft_lstlast(*a)->index < ft_lstlast(*b)->index)
		{
			rrb(b);
			pa(b, a);
			ra(a);
		}
		else if (ft_lstlast(*a)->index == (*a)->index - 1)
			rra(a);
		else if (*b && ft_best_move(*b, (*a)->index - 1))
			rb(b);
		else
			rrb(b);
	}
	while (is_sorted(*a))
		rra(a);
}
