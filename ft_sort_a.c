/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 00:17:31 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/14 18:07:54 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// int get_pos(t_list *lst, int max)
// {
// 	int cpt = 0;

// 	while (lst)
// 	{
// 		if (lst->index==max)
// 			return (cpt);
// 		cpt++;
// 		lst = lst->next;
// 	}
// 	return (cpt);
// }
// void ft_sort_a(t_list **a, t_list **b)
// {
	// (void)(**a);
	// (void)(**b);
	// int max  = 0;
	// int pos_nod = 0;
	// while (*b)
	// {
		// while (*b == ft_lstsize(*b) - 1)
			
		// printf ("----%d---\n", max);
	// 	pos_nod= get_pos (*b, max);
	// 	if (pos_nod >= ft_lstsize(*b) / 2)
	// 		while ((*b)->index != max)
	// 		{
	// 			ft_rotate (b);
	// 			write (1, "rb\n", 3);
	// 		}
	// 	else
	// 		while ((*b)->index != max)
	// 		{
	// 			ft_reverse_rotate(b);
	// 			write (1, "rrb\n", 4);
	// 		}	
	// 	ft_push_b(b , a);
	// 	write (1, "pa\n",1);
	// }
// }

// void	go_back_to_a(t_list **a, t_list	**b)
// {
// 	int		max;

// 	max = ft_lstlast(*a)->index;
// 	while (ft_lstsize(*b) > 0)
// 	{
// 		if (*b && (*a)->index - 1 == (*b)->index)
// 			pa(a, b, true);
// 		else if (*b && (*a)->index - 1 == ft_lstlast(*b)->index)
// 			(1) && (rrb(b, true), pa(a, b, true));
// 		else if (ft_lstlast(*a)->index == max)
// 			(1) && (pa(a, b, true), ra(a, true));
// 		else if (*b && ft_lstlast(*a)->index < (*b)->index)
// 			(1) && (pa(a, b, true), ra(a, true));
// 		else if (*b && ft_lstlast(*a)->index < ft_lstlast(*b)->index)
// 			(1) && (rrb(b, true), pa(a, b, true), ra(a, true));
// 		else if ((*a)->index - 1 == ft_lstlast(*a)->index)
// 			rra(a, true);
// 		else if (*b && is_in_up(*b, (*a)->index - 1))
// 			rb(b, true);
// 		else
// 			rrb(b, true);
// 	}
// }
// bool	is_in_up(t_list *b, int index)
// {
// 	t_list	*tmp;
// 	int		size;
// 	int		i;

// 	tmp = b;
// 	i = 0;
// 	size = ft_lstsize(b);
// 	while (tmp && i++ < size / 2)
// 	{
// 		if (tmp->index == index)
// 			return (true);
// 		tmp = tmp->next;
// 	}
// 	return (false);
// }