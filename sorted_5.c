/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:45:53 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/16 17:08:14 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_pos (t_list *lst, int pos)
{
	int i;
	int size;
	t_list *tmp;


	tmp=lst;
	size = ft_lstsize(lst);
	i = 0;
	while (i < size/2)
	{
		if (tmp->index == pos)
			return (1);
		tmp=tmp->next;
		i++;
	}
	return (0);
}
                                                                                                                                                
void sort_5(t_list **a,t_list **b)
{	
	if (check_pos(*a, 0))
	{
		while ((*a)->index != 0)
		{
			ft_rotate(a);
			write (1 , "ra\n", 3);
		}
		ft_push_b (a,b);
		write (1 , "pb\n", 3);

	}
	else
	{
		while ((*a)->index != 0)
		{
			ft_reverse_rotate(a);
			write (1 , "rra\n", 4);
		}
		ft_push_b (a,b);
		write (1, "pb\n", 3);
	}
	if (check_pos(*a, ft_lstsize(*a)))
	{
		while ((*a)->index != ft_lstsize(*a))
		{
			ft_rotate(a);
			write (1 , "ra\n", 3);
		}
		ft_push_b (a,b);
		write (1 , "pb\n", 3);

	}
	else
	{
		while ((*a)->index != ft_lstsize(*a))
		{
			ft_reverse_rotate(a);
			write (1 , "rra\n", 4);
		}
		ft_push_b (a,b);
		write (1 , "pb\n", 3);
		
	}
	ft_sorted_3(a);
	ft_push_b (b, a);
	write (1 , "pa\n", 3);
	ft_rotate (a);
	write (1 , "ra\n", 3);
	ft_push_b (b, a);
	write (1 , "pa\n", 3);
}
