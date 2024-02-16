/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 06:39:14 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/14 10:21:55 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_b(t_list **src, t_list **dest)
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
	*src =(*src)->next;
	ft_lstdelone (tmp);
}

