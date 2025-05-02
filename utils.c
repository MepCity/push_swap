/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:13:05 by yaarslan          #+#    #+#             */
/*   Updated: 2025/04/16 20:54:32 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

int	check_lim(char *str, long res, t_stack *stack, t_data *data)
{
	char	*c;
	int		converted;

	c = ft_itoa(res);
	converted = ft_atoi(str);
	if ((long)converted == res)
	{
		free(c);
		return (res);
	}
	free(c);
	ft_error(stack, data);
	return (0);
}

int	ft_atoi_ps(char *str, t_stack *stack, int sgn, t_data *data)
{
	unsigned int		i;
	unsigned long int	r;

	i = 0;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn = -1;
		i++;
	}
	if (str[i] == '\0')
		ft_error(stack, data);
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			ft_error(stack, data);
		r = (str[i++] - '0') + (r * 10);
	}
	if ((r > 2147483648 && sgn == -1) || (r > 2147483647 && sgn == 1))
		ft_error(stack, data);
	r = check_lim(str, r * sgn, stack, data);
	return (r);
}

int	ft_strlen_ps(char **av)
{
	int	i;

	i = 0;
	while (*av)
	{
		av++;
		i++;
	}
	return (i);
}

int	ft_checksorted(int *stack, int size, int order)
{
	int	i;

	if (order == 0)
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] > stack[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] < stack[i])
				return (0);
			i++;
		}
		return (1);
	}
}

void	ft_checkdouble(t_stack *stack, int size, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stack->a[i] == stack->a[j])
				ft_error(stack, data);
			j++;
		}
		i++;
		j = i + 1;
	}
}
