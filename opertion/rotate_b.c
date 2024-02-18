/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:20:57 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/18 15:59:45 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	last = ft_lstlast(*lst);
	last->next = tmp;
	tmp->next = NULL;
	write (1, "rb\n", 3);
}
