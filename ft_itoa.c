/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:22:31 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/06 09:46:31 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*ptr;
	long	tmp;
	int		length;

	tmp = n;
	length = (n <= 0 ? 2 : 1);
	while (n && ++length)
		n /= 10;
	if (!(ptr = (char *)malloc(sizeof(char) * length)))
		return (NULL);
	ptr[--length] = '\0';
	if (tmp <= 0)
		ptr[0] = (tmp < 0 ? '-' : '0');
	while (tmp)
	{
		ptr[--length] = (tmp < 0 ? -tmp : tmp) % 10 + '0';
		tmp /= 10;
	}
	return (ptr);
}
