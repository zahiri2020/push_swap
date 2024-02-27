/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 07:11:23 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/26 19:27:33 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	ra(t_list **lst)
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
	// write (1, "ra\n", 3);
}
