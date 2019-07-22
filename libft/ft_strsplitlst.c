/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 04:45:25 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/28 22:34:25 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_strsplitlst(char const *str, int c)
{
	t_list	*lst;
	t_list	*head;
	int		l;

	head = NULL;
	l = 0x0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			l = ft_wordlen(str, c);
			lst = ft_lstnew(ft_strsub(str, 0x0, l), sizeof(lst->content));
			ft_lstpush(&head, lst);
			str = str + l;
		}
	}
	return (head);
}
