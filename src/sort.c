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

void	temporary_sort(int *stack_temp, int size)
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
