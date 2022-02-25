/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:53:12 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/24 17:58:47 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft/libft.h"
# include <limits.h>

/* --------- STRUCT FOR STACK --------- */

typedef struct s_stack
{
	int				nbr;
	int				order;
	long			bin;
	struct s_stack	*next;
}				t_stack;

int		main(int argc, char **argv);

void	ft_free_stack(t_stack **stack);

/* --------- CHECKERS FOR ERRORS --------- */

int		check_dub(char **argv);

int		check_overflow(char **argv);

int		check_nbr(char **argv);

int		check_error(int argc, char **argv);

/* --------- SWAP FUNCTIONS --------- */

void	ft_swap(t_stack **stack);

void	sa(t_stack **a);

void	sb(t_stack **b);

void	ss(t_stack **a, t_stack **b);

/* --------- PUSH FUNCTIONS --------- */

void	ft_push(t_stack **a, t_stack **b);

void	pa(t_stack **a, t_stack **b);

void	pb(t_stack **a, t_stack **b);

/* --------- ROTATE FUNCTIONS --------- */

void	ft_rotate(t_stack **stack);

void	ra(t_stack **a);

void	rb(t_stack **b);

void	rr(t_stack **a, t_stack **b);

/* --------- REVERSE ROTATE FUNCTIONS --------- */

void	ft_reverse_rotate(t_stack **stack);

void	rra(t_stack **a);

void	rrb(t_stack **b);

void	rrr(t_stack **a, t_stack **b);

/* --------- INIT STACKS --------- */

t_stack	*init_stack(int argc, char **argv);

t_stack	*ft_freshstack(int num);

/* --------- SORTING ALGORITHM --------- */

void	ft_sort_two(t_stack **stack);

void	ft_sort_three(t_stack **stack);

void	ft_sort_five(t_stack **a, t_stack **b);

void	ft_sort_algorithm(int argc, t_stack **a, t_stack **b);

void	order_to_bin(t_stack **a);

int		get_max_bin(t_stack **a);

void	push_and_back(t_stack **a, t_stack **b);

void	all_sort(int argc, t_stack **a, t_stack **b);

/* --------- UTILS FUNCTIONS  --------- */

int		small_int(t_stack **a);

int		is_sorted(t_stack **a);

int		stack_size(t_stack **stack);

int		last_nbr(t_stack *stack);

int		cost(t_stack **stack);

long	bin_convert(int order);

char	*ft_strrev(char *string);

void	just_sort(t_stack **a);

int		find_lowest_order(t_stack **a);

int		faster(t_stack **a, int x);

#endif
