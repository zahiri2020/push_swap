/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:50:15 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/18 16:07:32 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rot(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *lst;
	if (!*lst || !(*lst)->next)
		return ;
	*lst = (*lst)->next;
	last = ft_lstlast(*lst);
	last->next = tmp;
	tmp->next = NULL;
}

void	rrr(t_list **a, t_list **b)
{
	rev_rot(a);
	rev_rot(b);
	write (1, "rrr\n", 4);
}
