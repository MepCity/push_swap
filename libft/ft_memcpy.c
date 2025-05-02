/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:19:39 by yaarslan          #+#    #+#             */
/*   Updated: 2024/10/11 14:22:32 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;

	if (!dest && !src)
		return (0);
	index = 0;
	while (index < n)
	{
		*(unsigned char *)(dest + index) = *(unsigned char *)(src + index);
		index++;
	}
	return (dest);
}
