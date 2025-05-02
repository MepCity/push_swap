/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:49:41 by yaarslan          #+#    #+#             */
/*   Updated: 2024/10/20 11:49:48 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*roamer;
	t_list	*follower;

	if (lst != NULL && *lst != NULL)
	{
		roamer = *lst;
		while (roamer != NULL)
		{
			if (roamer->content != NULL)
				del(roamer->content);
			follower = roamer;
			roamer = roamer->next;
			free(follower);
		}
		*lst = NULL;
	}
}
