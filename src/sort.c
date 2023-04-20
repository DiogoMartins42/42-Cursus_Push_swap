/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:30:49 by dmanuel-          #+#    #+#             */
/*   Updated: 2023/03/30 12:46:32 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	temp_sort(int *stack_temp, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack_temp[i] > stack_temp[j])
			{
				temp = stack_temp[i];
				stack_temp[i] = stack_temp[j];
				stack_temp[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	three_stack_a(t_stacks *three)
{
	if (three->a[0] > three->a[1] && three->a[0] < three->a[2]
		&& three->a[1] < three->a[2])
		swap_a(three, 0);
	if (three->a[0] > three->a[1] && three->a[0] > three->a[2]
		&& three->a[1] > three->a[2])
	{
		swap_a(three, 0);
		reverse_rotate_a(three, 0);
	}
	if (three->a[0] > three->a[1] && three->a[0] > three->a[2]
		&& three->a[1] < three->a[2])
		rotate_a(three, 0);
	if (three->a[0] < three->a[1] && three->a[0] < three->a[2]
		&& three->a[1] > three->a[2])
	{
		swap_a(three, 0);
		rotate_a(three, 0);
	}
	if (three->a[0] < three->a[1] && three->a[0] > three->a[2]
		&& three->a[1] > three->a[2])
		reverse_rotate_a(three, 0);
}

int	sort(t_stacks *stack, int size)
{
	if (check_sort(stack->a, stack->size_a, 0) == 0)
	{
		if (size == 2)
			swap_a(stack, 0);
		else if (size == 3)
			three_stack_a(stack);
		else
			quick_sort_a(stack, size, 0);
	}
	return (0);
}

int	ft_push(t_stacks *stack, int len, int push)
{
	if (push == 0)
		push_b(stack, 0);
	else if (push == 1)
    {
        push_a(stack, 0);
    }
	len--;
	return (len);
}
