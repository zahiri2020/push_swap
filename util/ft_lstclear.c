/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 04:23:26 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/15 19:18:26 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_lstclear(t_list **lst)
{
	t_list	*tmp;

	if (!lst)
		return (0);
	while (*lst)
	{
		tmp = (*lst)->next ;
		free(*lst);
		(*lst) = tmp; 
	}
	*lst = NULL;
	return (0);
}
