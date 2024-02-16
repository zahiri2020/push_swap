/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:00:10 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/06 11:08:17 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sorted_2(t_list **lst)
{
	int	a;
	int	b;

	a = (*lst)->content;
	b = (*lst)->next->content;

	if (a > b)
	{
		ft_swap(lst);
		write (1, "sa\n", 3);
	}
	else
		write (1, "is_sorted\n", 10);
}