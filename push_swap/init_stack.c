/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:39:38 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/01 15:05:29 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Checks if the arguments are digits */
/* It creates a new list with the     */
/* arguments that it recieves. If the */
/* it's the 1st elemnt of the list it */
/* will create the element and will   */
/* put it at the front of the list,   */
/* the rest, it will create an element*/
/* and add it back, so it's stays in  */
/* the right order!                   */

t_stack	*init_stack(int argc, char **argv)
{
	int		i;
	t_stack	*tmp;
	t_stack	*stack;

	i = 1;
	while (i < argc)
	{
		if (i == 1)
		{
			stack = ft_freshstack(ft_atol(argv[i]));
			stack -> next = tmp;
			tmp = stack;
		}
		else
		{
			tmp -> next = ft_freshstack(ft_atol(argv[i]));
			tmp = tmp -> next;
		}
		i++;
	}
	tmp -> next = NULL;
	return (stack);
}
