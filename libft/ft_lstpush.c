/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 01:12:01 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/23 05:54:12 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **alst, t_list *new)
{
	t_list *tail;

	tail = *alst;
	if (tail == NULL)
	{
		*alst = new;
		return ;
	}
	while (tail->next)
		tail = tail->next;
	tail->next = new;
}
