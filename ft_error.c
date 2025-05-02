/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:13:42 by yaarslan          #+#    #+#             */
/*   Updated: 2025/04/16 18:25:49 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdlib.h>

void	ft_error(t_stack *stack, t_data *data)
{
	if (data->ac == 2)
		free_str_array(data->argv);
	free(stack->a);
	free(stack->b);
	ft_putendl_fd("Error", 2);
	exit (1);
}
