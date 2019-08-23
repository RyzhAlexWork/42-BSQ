/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:05:17 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/19 17:37:23 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_calc_width(char *source_array)
{
	int	width;

	width = 0;
	while (source_array[width] != '\n')
	{
		width++;
	}
	return (width);
}