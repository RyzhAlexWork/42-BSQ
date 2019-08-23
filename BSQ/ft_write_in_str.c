/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_in_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brika <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 20:00:19 by brika             #+#    #+#             */
/*   Updated: 2019/02/20 21:50:45 by brika            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"
#include "t_size.h"

char	*ft_write_in_str2(int fd, char *save, t_size *size)
{
	int				ret;
	unsigned int	total;
	char			buf[17001];

	ret = read(fd, buf, 17000);
	if (ret == -1)
		return (0);
	total = ret + 1;
	buf[ret] = '\0';
	while (ret > 0)
	{
		if (total > size->s)
			save = ft_realloc(save, size);
		ft_strcpy(save, buf, total - ret - 1);
		ret = read(fd, buf, 17000);
		buf[ret] = '\0';
		if (ret == -1)
			return (0);
		total += ret;
	}
	return (save);
}

char	*ft_write_in_str(char *name, t_size *size)
{
	int		fd;
	char	*save;

	size->s = 17001;
	save = (char *)malloc(sizeof(char) * size->s);
	if (name == 0)
	{
		return (ft_write_in_str2(0, save, size));
	}
	fd = open(name, O_RDWR);
	if (fd == -1)
		return (0);
	return (ft_write_in_str2(fd, save, size));
}
