/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brika <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 12:40:05 by brika             #+#    #+#             */
/*   Updated: 2019/02/20 20:12:26 by jbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"

void	ft_error(void)
{
	write(2, &"map error\n", 10);
}
