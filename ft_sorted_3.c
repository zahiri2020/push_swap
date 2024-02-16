/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 07:54:44 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/14 13:28:21 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void ft_sorted_3(t_list **lst)
{
	int a = (*lst)->content;
	int b = (*lst)->next->content;
	int c = (*lst)->next->next->content;

	// if (a < b && b < c && a < c)
	// 	write (1, "is_sorted\n" ,10);
	if (a > b && b < c && a < c)
	{
		ft_swap(lst);
		write(1,"sa\n", 3);
	}
	else if (a < b && b > c && a < c)
	{
		ft_reverse_rotate (lst);
		ft_swap(lst);
		write (1, "rra\n", 4);
		write (1, "sa\n", 3);
	}
	else if (a < b && b > c && a > c)
	{
		ft_reverse_rotate(lst);
		write (1, "rra\n", 4);
	}
	else if (a > b && b < c && a > c)
	{
		ft_rotate (lst);
		write (1, "ra\n", 3);
	}
	else if (a > b && b > c && a > c)
	{
		ft_swap (lst);
		ft_reverse_rotate(lst);
		write (1, "sa\n", 3);
		write (1, "rra\n", 4);
	}
}
