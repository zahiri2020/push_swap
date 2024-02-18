/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:02:36 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/18 15:58:56 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_duplicate(char **strs)
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
			if (ft_atoi(strs[i]) == ft_atoi(strs[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
