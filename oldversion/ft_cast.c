/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 00:47:34 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/20 02:51:35 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_cast(t_env *e, va_list arg, int uns)
{
	if (uns == 1)
	{
		e->nbr = va_arg(arg, uintmax_t);
		if (e->h == 1)
			e->nbr = (unsigned short int)e->nbr;
		if (e->h == 2)
			e->nbr = (unsigned char)e->nbr;
		if (e->j == 1)
			e->nbr = (uintmax_t)e->nbr;
		if (e->z == 1)
			e->nbr = (size_t)e->nbr;
		if (e->l == 1)
			e->nbr = (unsigned long int)e->nbr;
		if (e->l == 2)
			e->nbr = (unsigned long long int)e->nbr;
		else
			e->nbr = (unsigned int)e->nbr;
	}
	else
	{
		e->nbrs = va_arg(arg, long long int);
		if (e->h == 1)
			e->nbrs = (signed short int)e->nbrs;
		if (e->h == 2)
			e->nbrs = (signed char)e->nbrs;
		if (e->j == 1)
			e->nbrs = (long long int)e->nbrs;
		if (e->z == 1)
			e->nbrs = (size_t)e->nbrs;
		if (e->l == 1)
			e->nbrs = (long int)e->nbrs;
		if (e->l == 2)
			e->nbrs = (long long int)e->nbrs;
		else
			e->nbrs = (int)e->nbrs;
	}
}
