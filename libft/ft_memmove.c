/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:31:37 by yaarslan          #+#    #+#             */
/*   Updated: 2024/10/11 14:22:20 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		d[n] = s[n];
	return (dest);
}
