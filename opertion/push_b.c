/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 09:48:21 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/18 16:09:49 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list **src, t_list **dest)
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
	write(1, "pb\n", 3);
}
	// free(tmp);÷