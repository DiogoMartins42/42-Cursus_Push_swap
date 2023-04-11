/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:12:40 by dmanuel-          #+#    #+#             */
/*   Updated: 2023/03/30 14:43:32 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdlib.h>

void	quicksort_three_a_b(t_stacks *stack, int len)
{
	if (len == 3 && stack->size_a == 3)
		three_stack_a(stack);
	else if (len == 2)
	{
		if (stack->a[0] > stack->a[1])
			swap_a(stack, 0);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->[2]))
		{
			if (len == 3 || !(stack->[0] > stack->a[1] && stack->a[2]))
				swap_a(stack, 0);
			else if (len == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->[1]))
				len = ft_push(stack, len, 0);
			else if (stack->a[0] > stack->[1])
				swap_a(stack, 0);
			else if (len++)
				push_a(stack, 0);
		}
	}
}		

int	sort_three_b(t_stacks *stack, int len)
{
	if (len == 1)
		push_a(stack, 0);
	else if (len == 2)
	{
		if (stack->b[0] < stack->b[0])
			swap_b(stack, 0);
		while (len--)
			push_a(stack, 0);
	}
	else if (len == 3)
	{
		while (len || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (len == 1 && stack->[0] > stack->a[1])
				swap_a(stack, 0);
			else if (len == 1 && (len >= 2 && stack->b[0] > stack->b[1])
				|| (len == 3 && stack->b[0] > stack->b[2]))
				len = ft_push(stack, len, 1);
			else
				swap_b(stack, 0);
		}
	}
	return (0);
}

int	mediane(int *pivot, int *stack, int size)
{
	int	temp_stack;
	int	i;

	temp_stack = (int *)malloc(size * sizeof(int));
	if (!temp_stack)
		return (0);
	i = 0;
	while (i < size)
	{
		temp_stack[i] = stack[i];
		i++;
	}
	temp_sort(temp_stack, size);
	*pivot = temp_stack[size / 2];
	free (temp_stack);
	return (1);
}

int	quick_sort_a(t_stacks *stack, int len, int count)
{
	int	med;
	int	numbers;

	if (check_sort(stack->a, len, 0) == 1)
		return (1);
	numbers = len;
	if (len <= 3)
	{
		quick_sort_three_ab(stack, len);
		return (1);
	}
	if (!mediane(&med, stacks->a, len))
		return (0);
	while (len != numbers / 2 + numbers % 2)
	{
		if (stack->a[0] < med && (len--))
			push_b(stack, 0);
		else if (++count)
			rotate_a(stack, 0);
	}
	while (numbers / 2 + numbers % 2 != stack->size_a && count--)
		reverse_rotate_a(stack, 0);
	return (quick_sort_a(stack, numbers / 2 + numbers % 2, 0) \
	&& quick_sort_b(stack, numbers / 2, 0));
	return (1);
}

int	quick_sort_b(t_stacks *stack, int len, int count)
{
	int	med;
	int	numbers;

	if (check_sort(stack->b, len, 1) == 1)
		while (len--)
			push_a(stack, 0);
	if (len <= 3)
	{
		sort_three_b(stack, len);
		return (1);
	}
	numbers = len;
	if (!mediane(&med, stack->b, len))
		return (0);
	while (len != numbers / 2)
	{
		if (stack->b[0] >= med && len --)
			push_a(stack, 0);
		else if (++count)
			rotate_b(stac, 0);
	}
	while (numbers / 2 != stack->size_b && count--)
		reverse_rotate_b(stack, 0);
	return (quick_sort_a(stack, numbers / 2 + numbers % 2, 0) \
	&& quick_sort_b(stack, numbers / 2, 0));
}
