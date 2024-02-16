/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:02:36 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/15 11:15:30 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		is_duplicate(char **strs)
{
	int		i;
	int		j;

	i = 0;
	while (strs[i])
	{
		j = i + 1;
		if (ft_atoi(strs[i]) > 2147483647 || ft_atoi (strs[i]) < -2147483648)
			return (1);
		while (strs[j])
		{
		// printf ("here\n");
			if (ft_atoi(strs[i]) == ft_atoi(strs[j]))
				return (1);
			j++;
		}
		// printf ("%ld\n", ft_atoi("-1"));
		i++;
	}
	return (0);
}