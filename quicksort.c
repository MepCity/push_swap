/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:13:22 by yaarslan          #+#    #+#             */
/*   Updated: 2025/04/13 16:13:23 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	ft_little_sorter_a(t_stack *stack, int len)
{
	if (len == 3 && stack->size_a == 3)
		sort_three(stack);
	else if (len == 2)
	{
		if (stack->a[0] > stack->a[1])
			sa(stack);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (len == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				sa(stack);
			else if (len == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				len = ft_push(stack, len, 'b');
			else if (stack->a[0] > stack->a[1])
				sa(stack);
			else if (len++)
			{
				pa(stack);
			}
		}
	}
}

int	ft_little_sorter_b(t_stack *stack, int length)
{
	if (length == 1)
		pa(stack);
	else if (length == 2)
	{
		if (stack->b[0] < stack->b[1])
			sb(stack);
		while (length--)
			pa(stack);
	}
	else if (length == 3)
	{
		while (length || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (length == 1 && stack->a[0] > stack->a[1])
				sa(stack);
			else if (length == 1 || (length >= 2 && stack->b[0] > stack->b[1])
				|| (length == 3 && stack->b[0] > stack->b[2]))
				length = ft_push(stack, length, 'a');
			else
				sb(stack);
		}
	}
	return (0);
}

int	ft_getpivot(int *piv, int *stack, int size)
{
	int	*tmp;
	int	i;

	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (0);
	i = 0;
	while (i < size)
	{
		tmp[i] = stack[i];
		i++;
	}
	comparison_sort(tmp, size);
	*piv = tmp[size / 2];
	free(tmp);
	return (1);
}

int	quicksort_a(t_stack *stack, int len, int cr)
{
	int	piv;
	int	size;

	if (ft_checksorted(stack->a, len, 0) == 1)
		return (1);
	size = len;
	if (len <= 3)
	{
		ft_little_sorter_a(stack, len);
		return (1);
	}
	if (!cr && !ft_getpivot(&piv, stack->a, len))
		return (0);
	while (len != size / 2 + size % 2)
	{
		if (stack->a[0] < piv && (len--))
			pb(stack);
		else if (++cr)
			ra(stack);
	}
	while (size / 2 + size % 2 != stack->size_a && cr--)
		rra(stack);
	return (quicksort_a(stack, size / 2 + size % 2, 0)
		&& quicksort_b(stack, size / 2, 0));
}

int	quicksort_b(t_stack *stack, int len, int cr)
{
	int	piv;
	int	size;

	if (!cr && ft_checksorted(stack->b, len, 1) == 1)
		while (len--)
			pa(stack);
	if (len <= 3)
	{
		ft_little_sorter_b(stack, len);
		return (1);
	}
	size = len;
	if (!ft_getpivot(&piv, stack->b, len))
		return (0);
	while (len != size / 2)
	{
		if (stack->b[0] >= piv && len--)
			pa(stack);
		else if (++cr)
			rb(stack);
	}
	while (size / 2 != stack->size_b && cr--)
		rrb(stack);
	return (quicksort_a(stack, size / 2 + size % 2, 0)
		&& quicksort_b(stack, size / 2, 0));
}
