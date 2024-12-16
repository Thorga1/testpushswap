/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:37:04 by tordner           #+#    #+#             */
/*   Updated: 2024/11/27 14:00:51 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	init_stack(t_stack_node **a, char **temp, bool check_tab)
{
	int		n;
	int		i;

	i = 1;
	while (temp[i])
	{
		n = ft_atol(temp[i]);
		create_node(a, n);
		i++;
	}
	if (check_tab)
		free_tab(temp);
}
