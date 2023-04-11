/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:07:31 by dmanuel-          #+#    #+#             */
/*   Updated: 2023/03/30 11:07:36 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"
#include <stdlib.h>

void	push_swap(char **av)
{
	t_stacks	stack;
	int			size;
	int			i;

	i = -1;
	size = push_strlen(av);
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return ;
	stack.size_a = size;
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		free(stack.a)
		return ;
	}
	stack.size_b = 0;
	while (++i < size)
		stack.a[i] = push_atoi(av[i], stack.a);
	doubles(stack.a, size);
	sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		push_swap(av);
		return (0);
	}
	return (0);
}
