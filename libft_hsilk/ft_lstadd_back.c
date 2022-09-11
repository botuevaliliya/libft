/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:55:57 by hsilk             #+#    #+#             */
/*   Updated: 2021/10/26 19:55:59 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	a = *lst;
	if (a == 0)
	{
		*lst = new;
		return ;
	}
	while (a->next != 0)
	{
		a = a->next;
	}
	a->next = new;
}
