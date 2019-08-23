/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_fill.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:57:34 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/20 15:35:56 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_map.h"

void	ft_second_fill(char *source_array, int **new_array, t_map *map)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < map->l)
	{
		while (i < map->w)
		{
			if (source_array[k] == map->o)
			{
				new_array[j][i] = 0;
			}
			i++;
			k++;
		}
		i = 0;
		j++;
		k++;
	}
}
