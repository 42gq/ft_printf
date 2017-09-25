/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ssint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 02:45:44 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/25 03:24:54 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_stockssitoa(char a)
{
	char	*str;

	str = NULL;
	str = ft_ssitoa(a);
	return (str);
}

int		ft_handle_ssint(t_env *e)
{
	char	*add;

	add = NULL;
	if (!(add = ft_stockssitoa(e->nbrs)))
		return (-1);
	add = ft_apply_options(add, e);
	if (!(e->stock = ft_strjoinfree(e->stock, add)))
		return (-1);
	return (1);
}
