/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:31:38 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/18 16:12:36 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;

	head = *lst;
	tmp = *lst;
	if (!*lst || !(*lst)->next)
		return ;
	*lst = *lst)->next;
	tmp->next = (*lst)->next;
	(*lst)->next = head;
	write (1, "sb\n", 3);
}
