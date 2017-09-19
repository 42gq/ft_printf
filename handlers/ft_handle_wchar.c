/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_wchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 06:17:32 by gquerre           #+#    #+#             */
/*   Updated: 2017/07/31 06:02:57 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_handle_wchar(wint_t v_arg, t_env *e)
{
	char	*add;
	wint_t	chr;

	add = NULL;
	chr = v_arg;
	add = ft_conv_wint_to_str(chr, e);
	if (!(e->stock = ft_strjoinfree(e->stock, add)))
		return (-1);
	return (1);
}
