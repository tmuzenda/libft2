/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 11:09:22 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/01 13:42:06 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	unsigned char	*ptr;

	if (!(ptr = (unsigned char *)malloc(size)))
		return (NULL);
	while (ptr)
		*ptr = '\0';
	return (void *)ptr;
}
