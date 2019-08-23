/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brika <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 19:41:51 by brika             #+#    #+#             */
/*   Updated: 2019/02/20 17:00:22 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"
#include "t_size.h"

char	*ft_strcpy(char *dest, char *src, int nb)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[nb + i] = src[i];
		i++;
	}
	dest[nb + i] = '\0';
	return (dest);
}

char	*ft_realloc(char *str, t_size *size)
{
	char	*new_str;

	size->s = size->s * 2;
	new_str = (char *)malloc(sizeof(char) * (size->s));
	new_str = ft_strcpy(new_str, str, 0);
	free(str);
	return (new_str);
}
