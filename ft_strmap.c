/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:17:02 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/05 09:52:45 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;
	size_t	ptr;

	if (!s || !f)
		return (NULL);
	ptr = ft_strlen(s);
	if (!(new = (char *)malloc(ptr + 1)))
		return (NULL);
	i = 0;
	while (i < ptr)
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
