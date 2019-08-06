/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 08:50:38 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/06 09:59:12 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *s, char c)
{
	int		sp;
	int		sp_tmp;

	sp_tmp = 0;
	sp = 0;
	while (*s)
	{
		if (sp_tmp == 1 && *s == c)
			sp_tmp = 0;
		if (sp_tmp == 0 && *s != c)
		{
			sp_tmp = 1;
			sp++;
		}
		s++;
	}
	return (sp);
}

char	**ft_strsplit(char const *s, char c)
{
	int		sp;
	char	**tab;
	int		i;
	int		j;
	int		start;

	if ((s == 0) || (c == 0))
		return (NULL);
	sp = ft_count_words(s, c);
	if (!(tab = malloc((sizeof(char *) * (sp + 1)))))
		return (NULL);
	i = 0;
	j = -1;
	while (++j < sp)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = ft_strsub(s, start, i - start);
		i++;
	}
	tab[j] = NULL;
	return (tab);
}
