/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:42:24 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/30 12:05:55 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;

	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	if (len <= 0)
		return (dst);
	if (from < to)
	{
		while (len)
		{
			to[len - 1] = from[len - 1];
			len--;
		}
		return (to);
	}
	else
	{
		ft_memcpy(dst, src, len);
		return (to);
	}
}
