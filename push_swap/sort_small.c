/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:26:14 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/24 17:53:28 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two(t_stack **stack)
{
	if ((*stack)-> nbr > (*stack)->next -> nbr)
		sa(stack);
	return ;
}

void	ft_sort_three(t_stack **stack)
{
	while (!((*stack)-> nbr < (*stack)-> next -> nbr
			&& (*stack)-> next -> nbr < (*stack)-> next -> next -> nbr))
	{
		if ((*stack)-> nbr > (*stack)->next -> next -> nbr
			&& (*stack)-> nbr < (*stack)-> next -> nbr)
			rra(stack);
		else if ((*stack)-> nbr > (*stack)-> next -> nbr
			&& (*stack)-> nbr < (*stack)-> next -> next -> nbr)
			sa(stack);
		else if ((*stack)-> nbr < (*stack)-> next -> nbr
			&& (*stack)->nbr < (*stack)-> next -> next -> nbr)
			rra(stack);
		else if ((*stack)-> nbr > (*stack)->next -> next -> nbr
			&& (*stack)-> nbr > (*stack)-> next -> nbr)
			ra(stack);
	}
}

void	invert(t_stack **stack)
{
	while (!((*stack)-> nbr > (*stack)-> next -> nbr
			&& (*stack)-> next -> nbr > (*stack)-> next -> next -> nbr))
	{
		if ((*stack)-> nbr < (*stack)->next -> next -> nbr
			&& (*stack)-> nbr > (*stack)-> next -> nbr)
			rrb(stack);
		else if ((*stack)-> nbr < (*stack)-> next -> nbr
			&& (*stack)-> nbr > (*stack)-> next -> next -> nbr)
			sb(stack);
		else if ((*stack)-> nbr > (*stack)-> next -> nbr
			&& (*stack)->nbr > (*stack)-> next -> next -> nbr)
			rrb(stack);
		else if ((*stack)-> nbr < (*stack)->next -> next -> nbr
			&& (*stack)-> nbr < (*stack)-> next -> nbr)
			rb(stack);
	}
}

void	ft_sort_five(t_stack **a, t_stack **b)
{
	if (faster(a, small_int(a)))
		while ((*a)-> nbr != small_int(a))
			ra(a);
	else
		while ((*a)-> nbr != small_int(a))
			rra(a);
	pb(a, b);
	if (faster(a, small_int(a)))
		while ((*a)-> nbr != small_int(a))
			ra(a);
	else
		while ((*a)-> nbr != small_int(a))
			rra(a);
	pb(a, b);
	if (!(*a)-> next -> next)
		ft_sort_two(a);
	else
		ft_sort_three(a);
	pa(a, b);
	pa(a, b);
}
