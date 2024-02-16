/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:23:39 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/15 23:16:49 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>


typedef struct s_list
{
	int				content;
	int 			index;
	struct s_list	*next;
}					t_list;

// typedef struct s_stack
// {
// 	t_list	*head;
// 	t_list	*tail;
// 	int		size;
// }				t_stack;

// typedef struct s_data
// {
// 	t_stack	*a;
// 	t_stack	*b;
// }				t_data;

int		ft_isdigit(int c);
char 	*parsing(char *str);
void	ft_exit(char *s);
char 	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s1);
char 	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strlen(const char *s);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lst_beforelast(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content, int index);
int 	ft_lstsize(t_list *lst);
int 	ft_lstclear(t_list **lst);
void 	ft_lstdelone(t_list *lst);
int		is_duplicate(char **strs);
void 	ft_push(t_list **lst, int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	indexing(t_list **lst);
//operations
t_list	*ft_stack_new(int content, t_list **stack);
void 	ft_swap(t_list **lst);
void 	ft_push_b(t_list **stack_a, t_list **stack_b);

void	ft_rotate(t_list **lst);
void	ft_reverse_rotate(t_list **lst);
void 	ft_sorted_3(t_list **lst);
void 	ft_sorted_2(t_list **lst);
void  	ft_sorting(t_list **stack_a, t_list **stack_b);
void	ft_sort_a(t_list **a, t_list **b);
int		is_sorted(t_list *stack_a);
void sort_5(t_list **a,t_list **b);

#endif