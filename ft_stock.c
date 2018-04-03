/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 03:10:04 by gquerre           #+#    #+#             */
/*   Updated: 2018/04/03 02:42:55 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_stock(char *format, t_env *e)
{
	char	*add;
	size_t	i;

	i = 0;
	i = ft_strchr_count(format, '%');
	if (i > 0)
	{
		if (!(add = ft_strnew(i + 1)))
			return (-1);
		add = ft_strcpy_until(add, format, i);
		if (!(e->stock = ft_strjoinfree(e->stock, add)))
		{
			ft_strdel(&add);
			return (-1);
		}
		ft_strdel(&add);
	}
	return (i);
}
