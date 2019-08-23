/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_cell.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:06:29 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/20 15:22:14 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_calc_cell(int **new_array, int i, int j)
{
	int	min;

	min = new_array[j][i - 1];
	if (min > new_array[j - 1][i])
		min = new_array[j - 1][i];
	if (min > new_array[j - 1][i - 1])
		min = new_array[j - 1][i - 1];
	new_array[j][i] = min + 1;
}
