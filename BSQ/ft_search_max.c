/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 19:23:15 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/19 17:39:05 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_map.h"

int	ft_search_max(int **new_array, t_map *map)
{
	int i;
	int j;
	int max;

	i = 0;
	j = 0;
	max = new_array[j][i];
	while (j < map->l)
	{
		while (i < map->w)
		{
			if (max < new_array[j][i])
				max = new_array[j][i];
			i++;
		}
		i = 0;
		j++;
	}
	return (max);
}
