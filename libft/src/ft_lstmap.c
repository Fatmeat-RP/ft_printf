/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:30:15 by acarle-m          #+#    #+#             */
/*   Updated: 2021/11/21 18:32:31 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*p;
	t_list	*tmp;
	void	*content;

	if (!f)
		return (NULL);
	p = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			if (del)
				(*del)(content);
			ft_lstclear(&p, del);
			return (NULL);
		}
		ft_lstadd_back(&p, tmp);
		lst = lst->next;
	}
	return (p);
}
