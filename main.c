/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 01:40:08 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/16 00:12:25 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **lst, int content)
{
	t_list *new = NULL;

	new = ft_stack_new(content, lst);
	if (!new)
		return ;
	ft_lstadd_back(lst, new);
}

void	f()
{
	system("leaks push_swap");
}

char **fill_strs(char **av, int ac)

{
	char	*s;
	char 	**strs;
	int			i;
	int			j;
	
	i = 1;
	j = 0;
	if (ac < 2)
		exit(1);
	while (i < ac)
	{
		while (av[i][j] == 32)
			j++;
		if (!av[i][j])
			ft_exit(s);
		s = parsing(av[i]);
		i++;
	}
	strs = ft_split(s, ' ');
	if (is_duplicate(strs))
			ft_exit(s);
	free(s);
	return (strs);
}

int main (int ac , char **av)
{
	// atexit(f);
	char **strs;
	int i;
	t_list *stack_a;
	t_list *stack_b;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	strs = fill_strs(av, ac);
	while (strs[i])
		ft_push(&stack_a, ft_atoi(strs[i++]));
	if (!is_sorted(stack_a))
			exit (ft_lstclear(&stack_a)); 
	// ft_lstclear(&stack_a);

	sort_5(&stack_a, &stack_b);

	// t_list *tmp = stack_a;
	// while (tmp)
	// {
	// 	printf("|%d |->|%d|\n",tmp->content, tmp->index);
	// 	tmp = tmp->next;
	// }
	// i = 0;
	// while (strs[i])
	// {
	// 	free(strs[i]);
	// 	i++;
	// }
	// free(strs);
}


	// if (ft_lstsize(stack_a) == 3)
	// 	ft_sorted_3 (&stack_a); 
	// ft_push_b(&stack_a, &stack_b);
	// printf("stack_b: %d de index %d\n", stack_b->content, stack_b->index);
	// ft_push_b(&stack_b, &stack_a);
	// ft_sorting(&stack_a, &stack_b);
	// 	ft_exit(1)
	 
	// ft_exit(s);
	// ft_sort_a(&stack_a, &stack_b);
	// t_list *tmp1 = stack_b;
	// printf("-------------\n");
	// while (tmp1)
	// {
	// 	printf("|%d |->|%d|\n",tmp1->content, tmp1->index);
	// 	tmp1 = tmp1->next;
	// }
	// }
	// t_list *tmp1 = stack_a;
	// tmp = stack_a;
	// tmp1 = stack_a;
	// ft_rotate(&tmp);
	// // tmp = stack_a;
	
	// printf("------------------\n");
	// while (tmp1)
	// {
	// 	printf("|%d |->|%d|\n",tmp1->content, tmp1->index);
	// 	tmp1 = tmp1->next;
	// }
	// free(s);
	// t_list *tmp2 = stack_a;
	// printf("\n");
	// ft_rotate(&tmp2);
	// while (tmp2)
	// {
	// 	printf("|%d |->|%d|\n",tmp2->content, tmp2->index);
	// 	free(tmp2);
	// 	tmp2 = tmp2->next;