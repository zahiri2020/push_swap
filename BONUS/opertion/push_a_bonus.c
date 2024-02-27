/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 06:39:14 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/26 19:27:13 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	pa(t_list **src, t_list **dest)
{
	t_list	*new;
	t_list	*tmp;

	if (!*src)
		return ;
	new = ft_lstnew((*src)->content, (*src)->index);
	if (!new)
		return ;
	ft_lstadd_front(dest, new);
	tmp = *src;
	*src = (*src)->next;
	free(tmp);
}

