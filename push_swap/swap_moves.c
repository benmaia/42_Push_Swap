/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:21:52 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/24 17:54:02 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Does a simple swap of the position */
/* of the elements                    */

void	ft_swap(t_stack **stack)
{
	int	tmp;

	tmp = (*stack)-> nbr;
	(*stack)-> nbr = (*stack)-> next -> nbr;
	(*stack)-> next -> nbr = tmp;
}

/* Swap the 1st 2 elemtns of the a stack */

void	sa(t_stack **a)
{
	ft_swap(a);
	write (1, "sa\n", 3);
}

/* Swap the 1st 2 elemtns of the b stack */

void	sb(t_stack **b)
{
	ft_swap(b);
	write (1, "sb\n", 3);
}

/* Swap the 1st 2 elemtns in both of the stacks */

void	ss(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
	write (1, "ss\n", 3);
}
