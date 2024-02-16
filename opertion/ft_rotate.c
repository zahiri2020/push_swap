/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 07:11:23 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/07 15:49:37 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_list **lst)
{
	if (!*lst || !(*lst)->next)
		return ;
	t_list	*tmp;
	t_list	*last;

	tmp = *lst;
	*lst = (*lst)->next;
	last = ft_lstlast(*lst);
	last->next=tmp;
	tmp->next = NULL;
}
