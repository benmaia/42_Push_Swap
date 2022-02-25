/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:18:35 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/23 21:47:18 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Shift up all elements of the stack by 1 */
/* The first element becomes the last one. */

void	ft_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	tmp2 = (*stack)-> next;
	while ((*stack)-> next)
		(*stack) = (*stack)-> next;
	(*stack)-> next = tmp;
	*stack = tmp2;
	tmp -> next = NULL;
}

void	ra(t_stack **a)
{
	ft_rotate(a);
	write (1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	ft_rotate(b);
	write (1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write (1, "rr\n", 3);
}
