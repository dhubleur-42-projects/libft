/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:32:21 by dhubleur          #+#    #+#             */
/*   Updated: 2021/11/23 10:50:03 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			return ((char *)s + i);
	}
	return (NULL);
}
