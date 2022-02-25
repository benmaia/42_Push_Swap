/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:03:27 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/24 17:55:55 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Checks if the list is sorted already */

int	is_sorted(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp -> next && tmp -> nbr < tmp -> next -> nbr)
		tmp = tmp -> next;
	if (!tmp)
		return (0);
	return (1);
}

/* Creates a new element with the    */
/* the value you pass it (an int)    */

t_stack	*ft_freshstack(int num)
{
	t_stack	*el;

	el = malloc(sizeof(t_stack));
	if (!el)
		return (NULL);
	el -> nbr = num;
	el -> next = NULL;
	return (el);
}

/* Frees the stacks after the program ends */

void	ft_free_stack(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next;

	if (!stack)
		return ;
	current = *stack;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

/* Find the smallest int node */

int	small_int(t_stack **a)
{
	t_stack	*tmp;
	int		small;

	tmp = *a;
	small = tmp -> nbr;
	while (tmp)
	{
		if (tmp -> nbr < small)
			small = tmp -> nbr;
		tmp = tmp -> next;
	}
	return (small);
}

/* Calculate the costs of moving the smallest */
/* Int to the top of the stack                */

int	faster(t_stack **a, int x)
{
	int		counter;
	t_stack	*tmp;

	tmp = *a;
	counter = 0;
	while (tmp-> nbr != x)
	{
		tmp = tmp-> next;
		counter++;
	}
	if (counter > 2)
		return (0);
	else
		return (1);
}
