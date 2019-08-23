/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bibl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brika <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:18:51 by brika             #+#    #+#             */
/*   Updated: 2019/02/20 13:16:23 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIBL_H
# define BIBL_H

# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# include "t_map.h"
# include "t_size.h"

void				file_manipulator(char *str, t_size *size);
char				*ft_write_in_str(char *name, t_size *size);
char				*ft_write_in_str2(int fd, char *save, t_size *size);
char				*ft_realloc(char *str, t_size *size);
char				*ft_strcpy(char *dest, char *src, int nb);
void				iter_over_file(char *array, t_map *map);
int					several_maps(char *a, t_map *map, int i, int j);
char				*ft_strcpy_part(char *dest, char *src, int start, int end);
int					error1(char *a, t_map *map, int start, int end);
int					error2(char *a, t_map *map, int start, int before);
int					error3(char *a, t_map *map, int start, int end);
void				ft_error(void);
void				connect_link(char *source_array, t_map *map);

#endif
