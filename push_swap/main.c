/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:23:51 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/24 17:27:31 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (!check_error(argc, argv))
		return (0);
	a = NULL;
	if (argc == 2)
	{
		a = init_stack(argc, argv);
		ft_free_stack(&a);
		return (0);
	}
	else
	a = init_stack(argc, argv);
	if (!a)
		return (0);
	if (!is_sorted(&a))
		return (0);
	b = NULL;
	ft_sort_algorithm(argc, &a, &b);
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
