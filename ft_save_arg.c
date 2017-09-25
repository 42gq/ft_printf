/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 08:05:15 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/25 02:59:27 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_save_arg2(t_env *e, va_list arg)
{
	if (e->condi == 'c')
		ft_handle_char(va_arg(arg, char), e);
	else if (e->condi == 'C')
		ft_handle_wchar(va_arg(arg, wint_t), e);
/*	if (e->condi == 'x')
		ft_handle_unsigned_int(e);
	 else if (e->condi == 'X')
		ft_handle_unsigned_int(e);
	else if (e->condi == 'u')
		ft_handle_unsigned_int(e);
	if (e->condi == 'U')
		ft_handle();
	else if (e->condi == 'o')
		ft_handle_unsigned_int(e);
*/}

int		ft_save_arg(t_env *e, va_list arg)
{
	if (e->condi == 'x' || e->condi == 'X' || e->condi == 'u' || e->condi == 'o')
		ft_cast(e, arg, 1);
	if (e->condi == 'i' || e->condi == 'd')
		ft_cast(e, arg, 0);
	if (e->condi == 's')
		ft_handle_str(va_arg(arg, char*), e);
	else if (e->condi == 'S')
		ft_handle_wstring(va_arg(arg, wchar_t*), e);
/*	else if (e->condi == 'd')
		ft_handle_int(e);
	if (e->condi == 'p')
		ft_handle();
	if (e->condi == 'D')
		ft_handle();
	else if (e->condi == 'i')
		ft_handle_int(e);
*/	else if (e->condi == '%')
		return (ft_percent(e));
	ft_save_arg2(e, arg);
	return (e->size_arg);
}
