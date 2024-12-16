/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 19:17:57 by tordner           #+#    #+#             */
/*   Updated: 2024/12/16 19:59:07 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_two_n(t_stack_node **a)
{
	if ((*a)->count > (*a)->next->count)
		sa(a, 0);
}

int	is_sorted(t_stack_node *a)
{
	t_stack_node	*head;

	head = a;
	while (head->next != NULL)
	{
		if (head->count > head->next->count)
			return (1);
		head = head->next;
	}
	return (0);
}
