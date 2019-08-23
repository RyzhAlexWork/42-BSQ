/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:03:49 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/19 17:37:38 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_map.h"
#include <stdlib.h>

int	**ft_create_array(t_map *map)
{
	int	**new_array;
	int	i;

	i = 0;
	new_array = (int **)malloc(sizeof(int *) * map->l);
	while (i < map->l)
	{
		new_array[i] = (int *)malloc(sizeof(int) * map->w);
		i++;
	}
	return (new_array);
}
