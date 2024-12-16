/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mimic_av.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:38:22 by tordner           #+#    #+#             */
/*   Updated: 2024/12/02 15:54:07 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	free_tab(char **tab)
{
	int	i;

	if (!tab)
		return ;
	free(tab[0]);
	i = 1;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	*free_temp(char **temp, int j)
{
	int	i;

	i = 0;
	while (i <= j)
	{
		free(temp[i]);
		i++;
	}
	free(temp);
	return (NULL);
}

char	**mimic_av(char **new)
{
	int		i;
	int		j;
	char	**temp;

	i = 0;
	while (new[i])
		i++;
	temp = malloc(sizeof(char *) * (i + 2));
	if (!temp)
		return (NULL);
	temp[0] = NULL;
	j = 0;
	while (j < i)
	{
		temp[j + 1] = strdup(new[j]);
		if (!temp[j + 1])
			return (free_temp(temp, j));
		j++;
	}
	temp[i + 1] = NULL;
	free_tab(new);
	return (temp);
}
