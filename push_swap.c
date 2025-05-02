/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:13:33 by yaarslan          #+#    #+#             */
/*   Updated: 2025/04/16 19:17:53 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

void	push_swap(t_data *data)
{
	t_stack		stack;
	int			size;
	int			i;

	i = -1;
	size = ft_strlen_ps(data->argv);
	stack.a = malloc(sizeof(int) * size);
	if (!stack.a)
		return ;
	stack.size_a = size;
	stack.b = malloc(sizeof(int) * size);
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.size_b = 0;
	while (++i < size)
		stack.a[i] = ft_atoi_ps(data->argv[i], &stack, 1, data);
	ft_checkdouble(&stack, size, data);
	sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

static int	invalid_args(int ac, char **av)
{
	char	**args;

	if (ac == 1)
		return (1);
	if (ac == 2)
	{
		args = ft_split(*av, ' ');
		if (!args || !args[0] || !args[0][0])
		{
			if (args)
				free_str_array(args);
			return (1);
		}
		free_str_array(args);
	}
	return (0);
}

static char	**parse_args(int ac, char **av)
{
	if (ac == 2)
		return (ft_split(*av, ' '));
	return (av);
}

int	main(int ac, char **av)
{
	t_data	data;

	if (invalid_args(ac, av + 1))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	av++;
	data.argv = parse_args(ac, av);
	data.ac = ac;
	push_swap(&data);
	if (ac == 2)
		free_str_array(data.argv);
	return (0);
}
