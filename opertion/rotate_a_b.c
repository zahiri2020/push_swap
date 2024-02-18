/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:54:57 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/18 16:02:33 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rot(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *lst;
	*lst = (*lst)->next;
	if (!*lst || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	last->next = tmp;
	tmp->next = NULL;
}

void	rr(t_list **a, t_list **b)
{
	rot (a);
	rot(b);
	write (1, "rr\n", 3);
}
