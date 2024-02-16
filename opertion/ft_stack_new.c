/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:42:10 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/07 12:04:16 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	insert_position(t_list *new_node, t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (new_node->content > tmp->content)
			new_node->index += 1;
		else
			tmp->index += 1;
		tmp = tmp->next;
	}
}

t_list	*ft_stack_new(int content, t_list **stack)
{
	t_list	*new_node = NULL;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> index = 0;
	new_node -> next = NULL;
	insert_position(new_node,stack);
	return (new_node);
}
