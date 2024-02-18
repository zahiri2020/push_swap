/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:17:36 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/18 16:08:12 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **lst)
{
	t_list	*head;
	t_list	*last;
	t_list	*before;

	before = ft_lst_beforelast (*lst);
	head = *lst;
	last = ft_lstlast(*lst);
	last->next = head;
	*lst = last;
	before->next = NULL;
	write (1, "rra\n", 4);
}
