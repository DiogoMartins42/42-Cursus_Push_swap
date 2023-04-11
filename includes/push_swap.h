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

typedef struct s_stacks
{
	int	a*;
	int	b*;
	int	size_a;
	int	size_b:
}		t_stacks

void	push_swap(char **av);
void	temporary_sort(int *stack_temp, int size);
void	three_stack_a(t_stacks *three);

int	sort(t_stacks *stack, int size);
int	ft_push(t_stacks *stack, int len, int push);
int	quick_sort_a(t_stacks *stack, int len, int count);
int	quick_sort_b(t_stacks *stack, int len, int count);

#endif
