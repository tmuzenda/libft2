/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:30:21 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/08 10:15:28 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1,
				const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && (i < n))
	{
		j = 0;
		while (s1[i + j] && i + j < n &&
			s1[i + j] == s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
