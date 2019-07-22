/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 23:07:06 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/26 01:58:42 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list *lst;

	if (!(lst = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0x0;
	}
	else
	{
		if (!(lst->content = ft_memalloc(content_size)))
		{
			free(lst);
			return (NULL);
		}
		ft_memcpy(lst->content, content, content_size);
		lst->content_size = content_size;
	}
	lst->next = NULL;
	return (lst);
}
