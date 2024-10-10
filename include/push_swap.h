/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:27:12 by dmanuel-          #+#    #+#             */
/*   Updated: 2023/03/30 12:29:08 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/include/libft.h"

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}		t_stacks;

void	push_swap(char **av);
void	temp_sort(int *stack_temp, int size);
void	three_stack_a(t_stacks *three);
void	error_detected(int *stack);
void	check_doubles(int *stack, int size);
int		check_sort(int *stack, int size, int order);
int		sort(t_stacks *stack, int size);
int		ft_push(t_stacks *stack, int len, int push);
int		quick_sort_a(t_stacks *stack, int len, int count);
int		quick_sort_b(t_stacks *stack, int len, int count);
void	quicksort_three_a_b(t_stacks *stack, int len);
int		sort_three_b(t_stacks *stack, int len);
int		mediane(int *pivot, const int *stack, int size);
int		push_swap_strlen(char **argv);
int		push_swap_atoi(char *str, int *stack);

void	swap_a(t_stacks *stack, int checker);
void	swap_b(t_stacks *stack, int checker);
void	swap_s(t_stacks *stack, int checker);

void	rotate_a(t_stacks *stack, int checker);
void	rotate_b(t_stacks *stack, int checker);
void	rotate_r(t_stacks *stack, int checker);

void	reverse_rotate_a(t_stacks *stack, int checker);
void	reverse_rotate_b(t_stacks *stack, int checker);
void	reverse_rotate_r(t_stacks *stack, int checker);

void	push_b(t_stacks *stack, int checker);
void	push_a(t_stacks *stack, int checker);

#endif
