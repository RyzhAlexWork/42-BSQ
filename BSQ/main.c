/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brika <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 20:11:53 by brika             #+#    #+#             */
/*   Updated: 2019/02/20 20:13:03 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"
#include "t_map.h"
#include "t_size.h"

int		main(int ac, char **av)
{
	int		i;
	t_size	size;
	t_size	*ptr_size;

	ptr_size = &size;
	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			file_manipulator(av[i], ptr_size);
			if (ac > 2 && i != ac - 1)
				write(1, &"\n", 1);
			i++;
		}
	}
	else
		file_manipulator(0, ptr_size);
	return (0);
}
