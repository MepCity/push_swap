/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:11:42 by yaarslan          #+#    #+#             */
/*   Updated: 2024/10/11 14:03:29 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		*(unsigned char *)(dest + i) = (unsigned char)c;
		i++;
	}
	return (dest);
}
