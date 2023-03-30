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
