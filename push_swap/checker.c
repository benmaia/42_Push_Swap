/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:38:07 by bmiguel-          #+#    #+#             */
/*   Updated: 2022/02/24 17:27:21 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Checks if there is any duplicate   */
/* number. It will look if they have  */
/* the same lenght, and if they have  */
/* it will compare both arguments to  */
/* see if they are equal or not       */

int	check_dub(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strlen(argv[i]) == ft_strlen(argv[j]))
			{
				if (ft_strncmp(argv[i], argv[j], ft_strlen(argv[i])) == 0)
				{
					write(1, "\033[1;31mError\n[0m", 13);
					return (0);
				}
			}
		j++;
		}
		i++;
	}
	return (1);
}

/* Checks if the arguments are digits */
/* only! You can only pass intengers. */
/* It has the exeption for "-" or '+' */
/* signs because we need to accept    */
/* negative and positive numbers      */

int	check_nbr(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][0] == '-' || argv[i][0] == '+')
			j++;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0 && argv[i][j])
			{
				write(1, "\033[1;31mError\n[0m", 13);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

/* Checks if the argument it was      */
/* passed was bigger then the INT_MAX */
/* and smaller then the INT_MIN, the  */
/* argument has to be and INT, can    */
/* not overflow                       */

int	check_overflow(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_atol(argv[i]) < INT_MIN || ft_atol(argv[i]) > INT_MAX)
		{
			write(1, "\033[1;31mError\n[0m", 13);
			return (0);
		}
		i++;
	}
	return (1);
}

/* Combines all the checkers, plus it */
/* checks if you passed some arguments*/
/* it should'nt be empty!             */

int	check_error(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\033[1;31mError\n[0m", 13);
		return (0);
	}
	if (!check_overflow(argv))
		return (0);
	if (!check_dub(argv))
		return (0);
	if (!check_nbr(argv))
		return (0);
	return (1);
}
