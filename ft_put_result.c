/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_result.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 13:17:03 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/19 17:38:26 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl2.h"

void	ft_put_result(int **new_array, t_map *map, int max)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < map->l)
	{
		while (i < map->w)
		{
			if (new_array[j][i] == max)
				ft_putchar(map->f);
			else if (new_array[j][i] == 0)
				ft_putchar(map->o);
			else
				ft_putchar(map->e);
			i++;
		}
		i = 0;
		j++;
		ft_putchar('\n');
	}
}
