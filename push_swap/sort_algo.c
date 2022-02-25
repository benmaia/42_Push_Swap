/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:52:06 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/24 17:37:57 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Use the bin convert to pass */
/* the order to binary		   */

void	order_to_bin(t_stack **a)
{
	t_stack	*node;

	node = *a;
	while (node)
	{
		node->bin = bin_convert(node->order);
		node = node->next;
	}
}

/* Return the char binary of */
/* biggets binary            */

int	get_max_bin(t_stack **a)
{
	int		max_order;
	long	temp;
	int		size;
	t_stack	*node;

	node = *a;
	size = 0;
	max_order = stack_size(a) - 1;
	while (node->order != max_order)
		node = node->next;
	temp = node->bin;
	while (temp != 0)
	{
		temp /= 10;
		size++;
	}
	return (size);
}

/* Push to B, put them in order and then */
/* pushes them back to A     			 */

void	push_and_back(t_stack **a, t_stack **b)
{
	long	first_rot;
	t_stack	*node;

	first_rot = -2147483649;
	while (first_rot != (*a)->nbr)
	{
		if ((*a)->bin % 10 == 0)
			pb(a, b);
		else
		{
			if (first_rot == -2147483649)
				first_rot = (*a)->nbr;
			ra(a);
		}
	}
	while (stack_size(b) != 0)
		pa(a, b);
	node = *a;
	while (node)
	{
		node->bin /= 10;
		node = node->next;
	}
}

/* Sorts everything and puts it nice */

void	all_sort(int argc, t_stack **a, t_stack **b)
{
	int	max_bin;

	(void)argc;
	just_sort(a);
	order_to_bin(a);
	max_bin = get_max_bin(a);
	while (max_bin > 0 && is_sorted(a) != 0)
	{
		push_and_back(a, b);
		max_bin--;
	}
}

/* Depending of the number of args it chooses */
/* the best algo functions					  */

void	ft_sort_algorithm(int argc, t_stack **a, t_stack **b)
{
	if (argc == 3)
	{
		ft_sort_two(a);
		return ;
	}
	if (argc == 4)
	{
		ft_sort_three(a);
		return ;
	}
	if (argc > 4 && argc < 7)
	{
		ft_sort_five(a, b);
		return ;
	}
	else
		all_sort(argc, a, b);
	return ;
}
