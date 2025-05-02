/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:33:54 by yaarslan          #+#    #+#             */
/*   Updated: 2024/10/24 12:32:52 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int nbr)
{
	int	i;

	if (nbr == 0)
		return (1);
	i = 0;
	while (nbr > 0 || nbr < 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (nbr > 0)
	{
		str[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	return (str);
}
