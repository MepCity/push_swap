/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:14:09 by yaarslan          #+#    #+#             */
/*   Updated: 2025/04/13 16:14:10 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"
#include "../ft_printf/inc/ft_printf.h"

void	rra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1)
		return ;
	i = stack->size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->size_b == 0 || stack->size_b == 1)
		return ;
	i = stack->size_b - 1;
	tmp = stack->b[i];
	while (i)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[i] = tmp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1
		|| (stack->size_b == 0 || stack->size_b == 1))
		return ;
	i = stack->size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	i = stack->size_b - 1;
	tmp = stack->b[i];
	while (i--)
		stack->b[i] = stack->b[i - 1];
	stack->b[i] = tmp;
	ft_printf("rrr\n");
}
