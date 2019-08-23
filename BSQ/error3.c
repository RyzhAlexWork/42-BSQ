/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brika <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 21:34:01 by brika             #+#    #+#             */
/*   Updated: 2019/02/20 20:12:07 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"
#include "t_map.h"

int		error3(char *a, t_map *map, int start, int end)
{
	int i;
	int w;

	i = start;
	while (a[i] != '\n' && a[i] != '\0')
		i++;
	if (a[i] == '\0')
		return (0);
	w = i - start + 1;
	if (end - start + 1 != w * map->l)
		return (0);
	i = start;
	while (i <= end)
	{
		if ((a[i] != map->e && a[i] != map->o && ((i -
		start + 1) % w != 0)) || (((i - start + 1) % w == 0) && a[i] != '\n'))
			return (0);
		i++;
	}
	map->w = w - 1;
	return (w);
}
