/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:34:00 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/23 21:09:47 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Pops the 1st element of 1 stack and */
/* pushes it to the other stack        */

void	ft_push(t_stack **pop, t_stack **push)
{
	t_stack	*pop_tmp;
	t_stack	*push_tmp;

	if (!pop)
		return ;
	pop_tmp = (*pop)-> next;
	push_tmp = *pop;
	(*pop) = pop_tmp;
	push_tmp -> next = *push;
	*push = push_tmp;
}

void	pa(t_stack **a, t_stack **b)
{
	ft_push(b, a);
	write (1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	ft_push(a, b);
	write (1, "pb\n", 3);
}
