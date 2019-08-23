/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brika <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 21:12:49 by brika             #+#    #+#             */
/*   Updated: 2019/02/20 20:11:58 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"
#include "t_map.h"

int		error2(char *a, t_map *map, int start, int before)
{
	int i;
	int l;

	if (start < 4)
		return (0);
	map->e = a[start - 3];
	map->o = a[start - 2];
	map->f = a[start - 1];
	if (map->e == map->o || map->e == map->f || map->o == map->f)
		return (0);
	i = before;
	l = 0;
	if (a[before] == '0')
		return (0);
	while (i < start - 3)
	{
		if (!(a[i] >= '0' && a[i] <= '9'))
			return (0);
		l = l * 10 + (a[i] - '0');
		i++;
	}
	map->l = l;
	return (l);
}
