/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:24:06 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/30 12:04:25 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_atoi(const char *str)
{
	int				i;
	int				n;
	int				result;
	unsigned char	*ptr;

	i = 0;
	n = 1;
	ptr = (unsigned char *)str;
	result = 0;
	while (ptr[i] == ' ' || ptr[i] == '\t' || ptr[i] == '\v' ||
			ptr[i] == '\n' || ptr[i] == '\f' || ptr[i] == '\r')
		i++;
	if ((ptr[i] == '-') || (ptr[i] == '+'))
	{
		if (ptr[i] == '-')
			n = -1;
		i++;
	}
	while (ptr[i] != '\0' && ptr[i] >= '0' && ptr[i] <= '9')
	{
		result *= 10;
		result += ptr[i] - '0';
		i++;
	}
	return (result * n);
}
