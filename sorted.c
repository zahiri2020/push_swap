/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 06:03:28 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/14 22:22:30 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_best_move(t_list *b , int index)
{
	t_list *tmp = b;
	int size = ft_lstsize(b);
	int i;
	
	i = 0;
	while (i <= size/2)
	{
		if (index == tmp->index)
			return (1);
		i++;
		tmp=tmp->next;
	}
	return (0);
}
void	indexing_plus(t_list **a , t_list **b)
{
	int index_max = ft_lstlast(*a)->index;
	while (*b)
	{
		if ((*a)->index - 1 == (*b)->index)
		{
			ft_push_b(b, a);
			write (1, "pa\n" ,3);
		}
		else if ((*a)->index - 1 == ft_lstlast(*b)->index)
		{
			ft_reverse_rotate(b);
			ft_push_b(b, a);
			write (1, "rrb\n" ,4);
			write (1, "pa\n" ,3);
		}
		else if (ft_lstlast(*a)->index == index_max)
		{
			// printf ("%d-----\n", (*a)->index);
			ft_push_b(b, a);
			ft_rotate(a);
			write (1,"pa\n" ,3);
			write (1, "ra\n" ,3);
		}
		else if (ft_lstlast(*a)->index < (*b)->index)
		{
			ft_push_b(b, a);
			ft_rotate(a);
			write (1,"pa\n" ,3);
			write (1,"ra\n" ,3);
		}
		else if (ft_lstlast(*a)->index < ft_lstlast(*b)->index)
		{
			ft_reverse_rotate(b);
			ft_push_b(b, a);
			ft_rotate(a);
			(write (1,"rrb\n" ,4), write (1,"pa\n" ,3), write (1,"ra\n" ,3));
		}
		else if (ft_lstlast(*a)->index == (*a)->index - 1)
		{
			ft_reverse_rotate(a);
			write (1, "rra\n", 4);
		}
		else if  (*b && ft_best_move(*b, (*a)->index - 1))
			{
				ft_rotate(b);
				write (1, "rb\n", 3);
			}
		else
				(ft_reverse_rotate(b), write (1, "rrb\n", 4));

	}
}

void	ft_sorting(t_list **stack_a, t_list **stack_b)
{
	int	pivot1 = 0;
	int	pivot2 = 0;

	while (ft_lstsize(*stack_a) > 3)
	{
		pivot1 = ft_lstsize(*stack_a) / 6 + pivot2; //  9
		pivot2 = ft_lstsize(*stack_a) / 3 + pivot2 ; // 10

		while (ft_lstsize(*stack_b) < pivot2) // 10
		{
			if (*stack_b && (*stack_a)->index >= pivot2 && (*stack_b)->index < pivot1)
			{
				ft_rotate(stack_b);
				ft_rotate(stack_a);
				write(1, "rr\n", 3);
			}
			else if (*stack_b && (*stack_b)->index < pivot1)
			{
				ft_rotate(stack_b);
				write(1, "rb\n", 3);
			}
			if (*stack_a && (*stack_a)->index < pivot2)
			{
				ft_push_b(stack_a, stack_b);
				write(1, "pb\n", 3);
			}
			else
			{
				ft_rotate(stack_a);
				write(1, "ra\n", 3);
			}
		}
	}
	ft_sorted_3(stack_a);
	indexing_plus(stack_a, stack_b);

}



//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// {
// 	int	offset = 0;

// 	while (*stack_a)
// 	{
// 		if (ft_lstsize(*stack_a) == 3)
// 		{
// 			ft_sorted_3(stack_a);
// 			break ;
// 		}
// 		if (ft_lstsize(*stack_a) >= 80)
// 			offset = 19;
// 		else if (ft_lstsize(*stack_a) >= 60)
// 			offset = 14;
// 		else if (ft_lstsize(*stack_a) >= 40)
// 			offset = 4;
// 		else if (ft_lstsize(*stack_a) >= 20)
// 			offset = 2;
// 		else
// 			offset = 1;
// 		if ((*stack_a)->index <= ft_lstsize(*stack_b)) // 15
// 		{
// 			ft_push_b(stack_a, stack_b);
// 			write(1, "pb\n", 3);
// 		}
// 		else if((*stack_a)->index <= ft_lstsize(*stack_b) + offset) // 
// 		{
// 			ft_push_b(stack_a, stack_b);
// 			ft_rotate(stack_b);
			
// 			write(1, "pb\n", 3);
// 			write(1, "rb\n", 3);
// 		}
// 		else
// 		{
// 			ft_rotate(stack_a);
// 			write(1, "ra\n", 3);
// 		}
// 	}
	// indexing_plus(stack_a, stack_b);
// }
