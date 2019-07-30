/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:20:17 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/29 13:31:31 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s1[i] == (unsigned char)c)
			return (s1 + i + 1);
		i++;
	}
	return (NULL);
}
