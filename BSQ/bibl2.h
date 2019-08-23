/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bibl2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 13:34:38 by jbowen            #+#    #+#             */
/*   Updated: 2019/02/19 16:23:30 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIBL2_H
# define BIBL2_H

# include "t_map.h"
# include "t_max.h"

int		**ft_create_array(t_map *map);
int		ft_calc_width(char *source_array);
int		ft_search_max(int **new_array, t_map *map);
int		ft_point_max(int **new_array, t_map *map, t_max *max, int maxx);
void	ft_first_fill(int **new_array, t_map *map);
void	ft_second_fill(char *source_array, int **new_array, t_map *map);
void	ft_third_fill(int **new_array, t_map *map);
void	ft_calc_cell(int **new_array, int i, int j);
void	ft_replace_values(int **new_array, t_max *max, int maxx);
void	ft_putchar(char c);
void	ft_put_result(int **new_array, t_map *map, int max);

#endif
