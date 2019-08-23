/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brika <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 21:07:12 by brika             #+#    #+#             */
/*   Updated: 2019/02/20 20:19:12 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"
#include "t_map.h"

int		error1(char *a, t_map *map, int start, int end)
{
	int i;
	int	max;

	i = start;
	max = 32 + i;
	while (a[i] != '\n' && i < end && i < max)
		i++;
	if (a[i] == '\n' && i != start && !(a[i + 1] == '\0' || a[i + 1] == '\n'))
	{
		if (!error2(a, map, i, start))
			return (0);
		if (!error3(a, map, i + 1, end - 1))
			return (0);
		else
			return (i);
	}
	return (0);
}
