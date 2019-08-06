/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:10:57 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/05 14:03:03 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*ptr;

	if (!(ptr = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ptr[size] = '\0';
	while (size--)
		ptr[size] = '\0';
	return (ptr);
}
