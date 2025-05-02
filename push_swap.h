/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:13:28 by yaarslan          #+#    #+#             */
/*   Updated: 2025/04/15 17:22:09 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stack;

typedef struct s_data
{
	char	**argv;
	int		ac;
}	t_data;

void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		rrr(t_stack *stack);

void		ft_error(t_stack *stack, t_data *data);
int			ft_atoi_ps(char *str, t_stack *stack, int sgn, t_data *data);
int			ft_strlen_ps(char **av);
int			ft_checksorted(int *stack, int size, int order);
void		ft_checkdouble(t_stack *stack, int size, t_data *data);
void		free_str_array(char **arr);

int			sort(t_stack *stack, int size);
int			ft_push(t_stack *stack, int len, char c);

void		comparison_sort(int *stack, int size);
void		sort_three(t_stack *stack);

int			quicksort_a(t_stack *stack, int length, int ct_r);
int			quicksort_b(t_stack *stack, int length, int ct_r);

#endif