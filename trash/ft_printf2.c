/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 01:21:26 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/20 05:28:47 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf2(char *format, ...)
{
	va_list	arg;
	int		ret;

	va_start(arg, format);
	ret = ft_inprintf(format, arg, 0);
	va_end(arg);
	return (ret);
}
