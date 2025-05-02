/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:30:39 by yaarslan          #+#    #+#             */
/*   Updated: 2024/10/24 12:34:21 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (*(unsigned char *)(str + index) == (unsigned char)c)
			return ((void *)(str + index));
		index++;
	}
	return (NULL);
}
