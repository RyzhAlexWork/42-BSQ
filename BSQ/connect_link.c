/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   connect_link.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 16:04:36 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/20 10:57:58 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl2.h"
#include <stdlib.h>

void	connect_link(char *source_array, t_map *map)
{
	int		**new_array;
	int		maxx;
	t_max	max_val;
	t_max	*max;

	max = &max_val;
	new_array = ft_create_array(map);
	ft_first_fill(new_array, map);
	ft_second_fill(source_array, new_array, map);
	ft_third_fill(new_array, map);
	maxx = ft_search_max(new_array, map);
	ft_point_max(new_array, map, max, maxx);
	maxx++;
	ft_replace_values(new_array, max, maxx);
	ft_put_result(new_array, map, maxx);
	free(new_array);
}
