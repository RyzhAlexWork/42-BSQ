/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_third_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:01:56 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/19 17:39:40 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl2.h"

void	ft_third_fill(int **new_array, t_map *map)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j < map->l)
	{
		while (i < map->w)
		{
			if (new_array[j][i] != 0)
				ft_calc_cell(new_array, i, j);
			i++;
		}
		i = 1;
		j++;
	}
}
