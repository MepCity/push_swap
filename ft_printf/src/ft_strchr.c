/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:20:12 by yaarslan          #+#    #+#             */
/*   Updated: 2025/04/13 16:20:13 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		len--;
		s++;
	}
	return (0);
}
