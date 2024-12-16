/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:55:25 by tordner           #+#    #+#             */
/*   Updated: 2024/12/16 20:01:02 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	count_args(char **temp)
{
	int	i;

	i = 0;
	while (temp[i + 1] != NULL)
		i++;
	return (i);
}

void	sort_bitwise(t_stack_node **a, t_stack_node **b, int args, int bt_comp)
{
	int		count;

	count = 0;
	while (count < args)
	{
		if (((*a)->count & bt_comp) == 0)
			pb(b, a, 0);
		else
			ra(a, 0);
		count++;
	}
	while (count > 0)
	{
		pa(a, b, 0);
		count--;
	}
}

void	sort_it(t_stack_node **a, t_stack_node **b, int args, int bt_comp)
{
	if (2 == args)
		sort_two_n(a);
	if (3 == args)
		sort_three_n(a);
	if (5 == args)
		sort_five_n(a, b);
	if (5 < args)
		sort_bitwise(a, b, args, bt_comp);
}

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;
	int				bit_compare;
	int				args;
	char			**temp;

	a = NULL;
	b = NULL;
	bit_compare = 1;
	if (error_check(ac, av) == 1)
		return (1);
	if (1 == ac || (2 == ac && !av[1][0]))
		return (1);
	else if (2 == ac)
		temp = mimic_av(ft_split(av[1], ' '));
	else if (2 != ac)
		temp = av;
	args = count_args(temp);
	init_stack(&a, temp, 2 == ac);
	assign_count(a);
	while (is_sorted(a) == 1)
	{
		sort_it(&a, &b, args, bit_compare);
		bit_compare *= 2;
		if (args == 4)
			break ;
	}
	free_stack(&a);
	return (0);
}
