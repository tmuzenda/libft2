/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:16:27 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/29 15:04:47 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strcpy(char *dst, const char *src)
{
	int			i;
	char		*str1;
	char		*str2;

	i = 0;
	str1 = (char *)dst;
	str2 = (char *)src;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (dst);
}
