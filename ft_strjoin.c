/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 10:44:22 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/02 11:53:02 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*torres;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	torres = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (torres == NULL)
		return (NULL);
	while (*s1)
	{
		torres[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		torres[i] = *s2;
		i++;
		s2++;
	}
	torres[i] = '\0';
	return (torres);
}
