/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 19:39:00 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/19 17:38:11 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_map.h"
#include "t_max.h"

int	ft_point_max(int **new_array, t_map *map, t_max *max, int maxx)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < map->l)
	{
		while (i < map->w)
		{
			if (new_array[j][i] == maxx)
			{
				max->i = i + 1 - maxx;
				max->j = j + 1 - maxx;
				return (0);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (0);
}
