/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 10:49:51 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/08 11:15:45 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ptr_lst;

	ptr_lst = f(lst);
	if (lst->next != NULL)
		ptr_lst->next = ft_lstmap(lst->next, f);
	return (ptr_lst);
}
