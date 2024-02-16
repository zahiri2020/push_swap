/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 04:03:32 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/05 02:17:13 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_words(const char *s, char c)
{
	int	cpt;

	cpt = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			cpt++;
		s++;
	}
	return (cpt);
}

static void	*memfree(char **strs, int k)
{
	while (k--)
		free(strs[k]);
	free(strs);
	return (0);
}

static char	**splited(char **strs, const char *s, char c)
{
	int	i;
	int	k;

	k = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		i = 0;
		if (*s)
		{
			while (s[i] && s[i] != c)
				i++;
			strs[k] = (char *)malloc(i + 1);
			if (!strs[k])
				return (memfree(strs, k));
			ft_strlcpy(strs[k], s, i + 1);
			s += i;
			k++;
		}
	}
	strs[k] = 0;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (0);
	strs = (char **)malloc (sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (0);
	strs = splited(strs, s, c);
	return (strs);
}
