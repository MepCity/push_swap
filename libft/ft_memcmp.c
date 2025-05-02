/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:40:06 by yaarslan          #+#    #+#             */
/*   Updated: 2024/10/19 12:40:55 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*d;
	const unsigned char	*s;

	d = (const unsigned char *)s1;
	s = (const unsigned char *)s2;
	while (n && *d == *s)
	{
		d++;
		s++;
		n--;
	}
	if (n)
		return (*d - *s);
	return (0);
}
