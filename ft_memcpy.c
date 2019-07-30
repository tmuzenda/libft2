/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:58:43 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/30 11:48:48 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned	char	*str1;
	unsigned	char	*str2;

	if (!dst && !src)
		return (NULL);
	i = 0;
	str1 = dst;
	str2 = (unsigned char *)src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
