/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:10:31 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/29 16:00:07 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str2 = (char *)src;
	str1 = (char *)dst;
	while (str2[i] != '\0' && i < len)
	{
		str1[i] = str2[i];
		i++;
	}
	while (i < len)
	{
		str1[i] = '\0';
		i++;
	}
	return (dst);
}
