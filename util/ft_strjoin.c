/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 02:29:30 by ezahiri           #+#    #+#             */
/*   Updated: 2024/02/26 16:22:47 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_util.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		len;

	if (!s1)
		return (ft_strdup(s2));
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	while (i < len)
		str[i++] = *s2++;
	str[len] = '\0';
	free(s1);
	return (str);
}
