/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 02:32:50 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/06 00:18:38 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;

	if (!*lst || !(*lst)->next)
		return ;
	head = *lst;
	tmp = *lst;
	*lst=(*lst)->next;
	tmp->next=(*lst)->next;
	(*lst)->next = head;
}
