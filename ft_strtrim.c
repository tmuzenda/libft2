/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:55:22 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/05 15:00:43 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_strtrim_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static char			*ft_strtrim_copy(char const *s, size_t start, size_t end)
{
	size_t	i;
	char	*r;

	if (!(r = (char *)malloc(end - start + 1)))
		return (NULL);
	i = 0;
	while (start < end)
		r[i++] = s[start++];
	r[i] = '\0';
	return (r);
}

char				*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	end = ft_strlen(s);
	start = 0;
	if (end > 0)
	{
		while (s[start] && ft_strtrim_space(s[start]))
			start++;
		if (s[start] == '\0')
			start = end;
		else
		{
			while (--end > 0 && ft_strtrim_space(s[end]))
				(void)0;
			end++;
		}
	}
	return (ft_strtrim_copy(s, start, end));
}
