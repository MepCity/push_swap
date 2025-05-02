/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:13:14 by yaarslan          #+#    #+#             */
/*   Updated: 2025/04/13 16:13:16 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	comparison_sort(int *stack, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack[i] > stack[j])
			{
				tmp = stack[i];
				stack[i] = stack[j];
				stack[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	sort_three(t_stack *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[1] < stack->a[2])
		sa(stack);
	if (stack->a[0] > stack->a[1]
		&& stack->a[0] > stack->a[2] && stack->a[1] > stack->a[2])
	{
		sa(stack);
		rra(stack);
	}
	if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] < stack->a[2])
		ra(stack);
	if (stack->a[0] < stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[1] > stack->a[2])
	{
		sa(stack);
		ra(stack);
	}
	if (stack->a[0] < stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] > stack->a[2])
		rra(stack);
}

int	sort(t_stack *stack, int size)
{
	if (ft_checksorted(stack->a, stack->size_a, 0) == 0)
	{
		if (size == 2)
			sa(stack);
		else if (size == 3)
			sort_three(stack);
		else
			quicksort_a(stack, size, 0);
	}
	return (0);
}

int	ft_push(t_stack *stack, int len, char c)
{
	if (c == 'a')
		pa(stack);
	else
		pb(stack);
	len--;
	return (len);
}
