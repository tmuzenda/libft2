/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:03:04 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/05 09:13:50 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned char	i;
	char			*str;

	if (!s || !f || !(*s))
		return ;
	i = 0;
	str = s;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
}
