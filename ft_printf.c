/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 05:27:56 by gquerre           #+#    #+#             */
/*   Updated: 2017/07/12 02:03:04 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list arg;
	int		res;
	t_env	*e;

	if (!(e = ft_memalloc(sizeof(t_env))))
		return (-1);
	e->stock = ft_strnew(1);
	ft_init_arg(e);
	va_start(arg, format);
	res = ft_read(format, arg, e);
	va_end(arg);
	return (res);
}