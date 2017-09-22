/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_llunt.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 01:57:36 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/22 03:41:56 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_stockllutoa(unsigned long long int a, t_env *e)
{
	char	*str;
	int		base;

	if (e->condi == 'o')
		base = 8;
	else if (e->condi == 'x' || e->condi == 'X')
		base = 16;
	else
		base = 10;
	str = ft_llutoa(a, base);
	return (str);
}

int		ft_handle_llunt(t_env *e)
{
	char	*add;

	add = NULL;
	if (!(add = ft_stockllutoa(e->nbr, e)))
				return (-1);
	if (e->condi > 64 && e->condi < 91)
		ft_capitalize(add);
	add = ft_apply_options(add, e);
	if (!(e->stock = ft_strjoinfree(e->stock, add)))
		return (-1);
	return (1);
}
