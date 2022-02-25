/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:52:42 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/24 17:57:03 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Just reverses the string */

char	*ft_strrev(char *string)
{
	char	*newstring;
	int		counter;
	int		str_count;

	newstring = NULL;
	newstring = (char *) malloc(sizeof(char) * ft_strlen(string) + 1);
	if (!newstring)
		return (NULL);
	str_count = ft_strlen(string) - 1;
	counter = 0;
	while (str_count >= 0)
	{
		newstring[counter] = string[str_count];
		counter++;
		str_count--;
	}
	newstring[counter] = '\0';
	return (newstring);
}

/* Return the amount of nodes */
/* of the linked list		  */

int	stack_size(t_stack **stack)
{
	int		counter;
	t_stack	*tmp;

	tmp = *stack;
	counter = 0;
	while (tmp)
	{
		tmp = tmp -> next;
		counter++;
	}
	return (counter);
}

/* Find the lowest value and */
/* returns it in order       */

int	find_lowest_order(t_stack **a)
{
	static long	lowest;
	static int	counter;
	long		low_cur;
	t_stack		*node;

	node = *a;
	if (!counter)
	{
		lowest = -2147483649;
		counter = 0;
	}
	low_cur = 2147483648;
	while (node)
	{
		if (node->nbr < low_cur && node->nbr > lowest)
			low_cur = node->nbr;
		node = node->next;
	}
	lowest = low_cur;
	counter++;
	return (low_cur);
}

/* Orders the numbers with the */
/* function above			   */

void	just_sort(t_stack **a)
{
	t_stack	*node;
	int		order;
	int		find;

	order = 0;
	while (order < stack_size(a))
	{
		node = *a;
		find = find_lowest_order(a);
		while (node->nbr != find)
			node = node->next;
		node->order = order;
		order++;
	}
}

/* Converts the index in binary */

long	bin_convert(int order)
{
	char	*keep_bin;
	char	*leak;
	long	returner;
	int		counter;

	keep_bin = (char *) malloc(sizeof(char) * 24);
	if (!keep_bin)
		return (2);
	counter = 0;
	if (order == 0)
		keep_bin[counter++] = '0';
	while (order != 0)
	{
		keep_bin[counter] = (order % 2) + '0';
		order /= 2;
		counter++;
	}
	keep_bin[counter] = '\0';
	leak = ft_strrev(keep_bin);
	returner = ft_atol(leak);
	free(keep_bin);
	free(leak);
	return (returner);
}
