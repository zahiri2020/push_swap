/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:30:41 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/14 12:58:42 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int get_max(t_list *lst)
{
	int max = lst->content;
	while (lst)
	{
		if (lst->content > max)
			max = lst->content;
		lst = lst->next;
	}
	return (max);
}
int get_min(t_list *lst)
{
	int min = lst->content;
	while (lst)
	{
		if (lst->content < min)
			min = lst->content;
		lst = lst->next;
	}
	return (min);
}

int get_index(t_list *lst, int value)
{
	int i = 0;
	while (lst)
	{
		if (lst->content == value)
			return (i);
		lst = lst->next;
		i++;
	}
	return (-1);
}
int get_next_min(t_list *lst, int min)
{
	int next_min = get_max(lst);
	while (lst)
	{
		if (lst->content > min && lst->content < next_min)
			next_min = lst->content;
		lst = lst->next;
	}
	return (next_min);
}
