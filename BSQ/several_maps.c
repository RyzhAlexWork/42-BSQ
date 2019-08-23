/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   several_maps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brika <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 22:15:12 by brika             #+#    #+#             */
/*   Updated: 2019/02/20 20:21:22 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"
#include "t_map.h"

char	*ft_strcpy_part(char *dest, char *src, int start, int end)
{
	int i;

	i = 0;
	while (start + i <= end)
	{
		dest[i] = src[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		several_maps(char *a, t_map *map, int i, int j)
{
	int		start;
	char	*the_map;

	if (a[j] == 0)
	{
		ft_error();
		return (j);
	}
	while (a[j] != '\0')
		j++;
	start = error1(a, map, i, j);
	if (start == 0)
	{
		ft_error();
		return (j);
	}
	the_map = (char *)malloc(sizeof(char) * (j - start));
	the_map[j - start - 1] = '\0';
	ft_strcpy_part(the_map, a, start + 1, j - 1);
	connect_link(the_map, map);
	return (j);
}
