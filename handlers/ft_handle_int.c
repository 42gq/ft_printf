/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 03:31:43 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/25 03:09:24 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_stockitoa(int a)
{
	char	*str;

	str = NULL;
	str = ft_itoa(a);
	return (str);
}

int		ft_handle_int(t_env *e)
{
	char	*add;
	
	add = NULL;

	if (!(add = ft_stockitoa(e->nbrs)))
		return (-1);
	add = ft_apply_options(add, e);
//	printf("estock before = %s\n", e->stock);
	if (!(e->stock = ft_strjoinfree(e->stock, add)))
		return (-1);
	return (1);
}
