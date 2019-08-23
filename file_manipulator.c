/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manipulator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brika <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 19:45:10 by brika             #+#    #+#             */
/*   Updated: 2019/02/20 20:12:17 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"
#include "t_map.h"

void	iter_over_file(char *array, t_map *map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	j = several_maps(array, map, i, j);
}

void	file_manipulator(char *str, t_size *size)
{
	char	*array;
	t_map	map;
	t_map	*ptr_map;

	ptr_map = &map;
	ptr_map->m_name = str;
	array = ft_write_in_str(str, size);
	if (array == 0)
	{
		ft_error();
		return ;
	}
	iter_over_file(array, ptr_map);
}
