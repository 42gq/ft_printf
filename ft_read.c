/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 02:44:18 by gquerre           #+#    #+#             */
/*   Updated: 2018/04/03 02:38:53 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		addon_read(t_env *e, char *tmp, int i, va_list arg)
{
	if (tmp[i] == '%')
	{
		ft_init_arg(e);
		if (ft_checkway(&tmp[i], e) < 0)
			return (ft_error_printf(-(ft_checkway(&tmp[i], e)), tmp));
		i += ft_save_arg(e, arg);
	}
	return (i);
}

int		ft_read(const char *format, va_list arg, t_env *e)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!(tmp = ft_strdup_until(format, ft_strlen(format))))
		return (ft_error_printf(1, tmp));
	while (tmp[i] != '\0')
	{
		if (tmp[i] != '\0' && tmp[i] != '%' && ft_stock(&tmp[i], e) < 0)
			return (ft_error_printf(2, tmp));
		e->size += ft_strchr_count(&tmp[i], '%');
		i += ft_strchr_count(&tmp[i], '%');
		if (tmp[i] == '\0')
			break ;
		if (!(i = addon_read(e, tmp, i, arg)))
			return (-1);
		if (i < 0 || (e->error != 0))
			return (ft_error_printf(e->error, tmp));
	}
	if (e->cheat_size)
		ft_cheat(e, 1, 0);
	free(tmp);
	return (e->size);
}
