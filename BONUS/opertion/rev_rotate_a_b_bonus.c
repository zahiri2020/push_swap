/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a_b_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:50:15 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/27 17:43:45 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
}
