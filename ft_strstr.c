/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:00:02 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/30 09:44:23 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	char	*a;
	char	*b;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		a = (char *)haystack;
		b = (char *)needle;
		while (*b && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
