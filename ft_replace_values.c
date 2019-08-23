/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 19:53:34 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/19 17:38:50 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_max.h"

void	ft_replace_values(int **new_array, t_max *max, int maxx)
{
	int	i;
	int	j;

	i = max->i;
	j = max->j;
	while (j < max->j + maxx - 1)
	{
		while (i < max->i + maxx - 1)
		{
			new_array[j][i] = maxx;
			i++;
		}
		i = max->i;
		j++;
	}
}
